/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecao <hecao@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:16:32 by hecao             #+#    #+#             */
/*   Updated: 2025/05/06 19:40:57 by hecao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lowercase(int ascii_value)
{
	if ((ascii_value >= 'a' && ascii_value <= 'z'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	ascii_value;

	i = 0;
	ascii_value = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		ascii_value = (int)str[i];
		if (!is_lowercase(ascii_value))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *test1 = "hello";
// 	char *test2 = "abcAdefghijkl";
// 	char *test3 = "";
// 	int i = ft_str_is_lowercase(test1);
// 	int j = ft_str_is_lowercase(test2);
// 	int k = ft_str_is_lowercase(test3);
// 	printf("%d", i);
// 	printf("%d", j);
// 	printf("%d", k);
// }