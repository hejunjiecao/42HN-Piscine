/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecao <hecao@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:07:47 by hecao             #+#    #+#             */
/*   Updated: 2025/05/06 20:17:03 by hecao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha_or_num(int ascii_value)
{
	if ((ascii_value >= 'a' && ascii_value <= 'z') || (ascii_value >= 'A'
			&& ascii_value <= 'Z') || (ascii_value >= '0'
			&& ascii_value <= '9'))
	{
		return (1);
	}
	return (0);
}

int	is_lowercase(int ascii_value)
{
	if ((ascii_value >= 'a' && ascii_value <= 'z'))
	{
		return (1);
	}
	return (0);
}

int	is_uppercase(int ascii_value)
{
	if ((ascii_value >= 'A' && ascii_value <= 'Z'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_alpha_or_num((int)str[i - 1]) && is_uppercase((int)str[i]))
		{
			str[i] += 32;
		}
		else if (!is_alpha_or_num((int)str[i - 1]) && is_lowercase((int)str[i]))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	char test1[] = "Hello";
// 	char *test01;
// 	test01 = ft_strcapitalize(test1);
// 	for(int i = 0; i < sizeof(test1); i++)
// 	{
// 		printf("%c",test1[i]);
// 	}
// }