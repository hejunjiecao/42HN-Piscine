/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecao <hecao@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:26:43 by hecao             #+#    #+#             */
/*   Updated: 2025/05/06 19:46:37 by hecao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_uppercase(int ascii_value)
{
	if ((ascii_value >= 'A' && ascii_value <= 'Z'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_uppercase(char *str)
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
		if (!is_uppercase(ascii_value))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int main()
// {
// 	char *test1 = "hello";
// 	char *test2 = "HN";
// 	char *test3 = "";
// 	int i = ft_str_is_uppercase(test1);
// 	int j = ft_str_is_uppercase(test2);
// 	int k = ft_str_is_uppercase(test3);
// 	printf("%d",i);
// 	printf("%d",j);
// 	printf("%d",k);
// }