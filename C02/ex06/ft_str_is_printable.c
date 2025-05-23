/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecao <hecao@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:28:53 by hecao             #+#    #+#             */
/*   Updated: 2025/05/08 16:19:16 by hecao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_printable(int ascii_value)
{
	if ((ascii_value >= 32 && ascii_value <= 126))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int	i;
	int	ascii_value;

	i = 0;
	ascii_value = 0;
	while (str[i] != '\0')
	{
		ascii_value = (int)str[i];
		if (!is_printable(ascii_value))
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
// 	char *test2 = "we€";
// 	char *test3 = "µ";
// 	int i = ft_str_is_printable(test1);
// 	int j = ft_str_is_printable(test2);
// 	int k = ft_str_is_printable(test3);
// 	printf("%d",i);
// 	printf("%d",j);
// 	printf("%d",k);
// }