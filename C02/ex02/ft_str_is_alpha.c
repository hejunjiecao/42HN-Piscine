/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecao <hecao@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:33:33 by hecao             #+#    #+#             */
/*   Updated: 2025/05/06 20:31:52 by hecao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(int ascii_value)
{
	if ((ascii_value >= 'a' && ascii_value <= 'z') || (ascii_value >= 'A'
			&& ascii_value <= 'Z'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	ascii_value;

	i = 0;
	ascii_value = 0;
	while (str[i] != '\0')
	{
		ascii_value = (int)str[i];
		if (!is_alpha(ascii_value))
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
// 	char *test2 = "abcghij[`aBCZ";
// 	int i = ft_str_is_alpha(test1);
// 	int j = ft_str_is_alpha(test2);
// 	printf("%d",i);
// 	printf("%d",j);
// }