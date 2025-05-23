/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecao <hecao@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:53:46 by hecao             #+#    #+#             */
/*   Updated: 2025/05/06 16:56:31 by hecao            ###   ########.fr       */
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

char	convert_to_lowercase(char c)
{
	return (c + 32);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_uppercase((int)str[i]))
		{
			str[i] = convert_to_lowercase(str[i]);
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
// 	test01 = ft_strlowcase(test1);
// 	for(int i = 0; i < 5; i++)
// 	{
// 		printf("%c",test1[i]);
// 	}
// }
