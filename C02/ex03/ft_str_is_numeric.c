/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecao <hecao@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:08:11 by hecao             #+#    #+#             */
/*   Updated: 2025/05/06 19:28:28 by hecao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_numeric(int ascii_value)
{
	if ((ascii_value >= '0' && ascii_value <= '9'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	ascii_value;

	i = 0;
	ascii_value = 0;
	while (str[i] != '\0')
	{
		ascii_value = (int)str[i];
		if (!is_numeric(ascii_value))
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
// 	char *test2 = "42";
// 	int i = ft_str_is_numeric(test1);
// 	int j = ft_str_is_numeric(test2);
// 	printf("%d",i);
// 	printf("%d",j);
// }