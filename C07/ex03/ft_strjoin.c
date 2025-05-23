/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecao <hecao@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 20:42:11 by hecao             #+#    #+#             */
/*   Updated: 2025/05/18 16:46:47 by hecao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_cat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = get_length(dest);
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
}

void	join_strings(int size, char **strs, char *result, char *sep)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_cat(result, strs[i]);
		if (i < size - 1)
			ft_cat(result, sep);
		i++;
	}
}

int	get_size(char **str, int size)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (i < size)
	{
		while (str[i][j])
		{
			count++;
			j++;
		}
		i++;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		total_size;

	if (size == 0)
	{
		result = malloc(1);
		if (!result)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	total_size = get_size(strs, size) + (size - 1) * get_length(sep);
	result = malloc((total_size + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[0] = '\0';
	join_strings(size, strs, result, sep);
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*arr[] = {"Hello", "42"};
// 	char	*result;

// 	result = ft_strjoin(2, arr, ", ");
// 	printf("%s\n", result);
// 	free(result);
// 	return (0);
// }