/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecao <hecao@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:37:06 by hecao             #+#    #+#             */
/*   Updated: 2025/05/06 16:52:47 by hecao            ###   ########.fr       */
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

char	convert_to_uppercase(char c)
{
	return (c - 32);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_lowercase((int)str[i]))
		{
			str[i] = convert_to_uppercase(str[i]);
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	char test1[] = "hello";
// 	char *test01;
// 	test01 = ft_strupcase(test1);
// 	for(int i = 0; i < 5; i++)
// 	{
// 		printf("%c",test1[i]);
// 	}
// }