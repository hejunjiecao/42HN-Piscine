/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecao <hecao@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:43:19 by hecao             #+#    #+#             */
/*   Updated: 2025/05/08 16:09:10 by hecao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*src;
// 	char	dest[6];
// 	char	*test;

// 	src = "hello";
// 	test = ft_strcpy(dest, src);
// 	for (int i = 0; i < 6; i++)
// 	{
// 		printf("%c", test[i]);
// 	}
// }
