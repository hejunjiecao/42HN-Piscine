/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecao <hecao@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 16:53:06 by hecao             #+#    #+#             */
/*   Updated: 2025/05/18 17:11:24 by hecao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_separator(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	is_word;

	count = 0;
	is_word = 0;
	while (*str)
	{
		if (is_separator(*str, charset))
			is_word = 0;
		else if (!is_word)
		{
			is_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

char	*alloc_word(char *start, int len)
{
	int		i;
	char	*word;

	i = 0;
	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

void	fill_words(char **result, char *str, char *charset)
{
	int		i;
	int		len;
	char	*start;

	i = 0;
	while (*str)
	{
		if (is_separator(*str, charset))
			str++;
		else
		{
			start = str;
			len = 0;
			while (*str && !is_separator(*str, charset))
			{
				len++;
				str++;
			}
			result[i++] = alloc_word(start, len);
		}
	}
	result[i] = NULL;
}

char	**ft_split(char *str, char *charset)
{
	int		words;
	char	**result;

	words = count_words(str, charset);
	result = malloc((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	fill_words(result, str, charset);
	return (result);
}
