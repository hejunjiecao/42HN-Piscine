/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecao <hecao@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 20:02:45 by hecao             #+#    #+#             */
/*   Updated: 2025/05/09 22:29:31 by hecao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	further_check(char *str, char *to_find, int i)
{
	int	j;

	j = 0;
	while (to_find[j])
	{
		if (str[i] != to_find[j])
		{
			return (0);
		}
		else
		{
			i++;
			j++;
		}
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0] && further_check(str, to_find, i))
		{
			return (&str[i]);
		}
		else
		{
			i++;
		}
	}
	return (NULL);
}

// int main()
// {
// 	printf("%s",ft_strstr("Hello 42","42"));
// 	return (0);
// }
