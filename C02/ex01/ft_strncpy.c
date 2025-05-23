/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecao <hecao@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 20:49:25 by hecao             #+#    #+#             */
/*   Updated: 2025/05/06 19:52:56 by hecao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}

// /* strncpy example */
// #include <stdio.h>

// int	main(void)
// {
// 	char	str1[] = "To be or not to be";
// 	char	str2[40];
// 	char	str3[40];

// 	/* copy to sized buffer (overflow safe): */
// 	ft_strncpy(str2, str1, sizeof(str2));
// 	/* partial copy (only 5 chars): */
// 	ft_strncpy(str3, str2, 5);
// 	str3[5] = '\0'; /* null character manually added */
// 	puts(str1);
// 	puts(str2);
// 	puts(str3);
// 	return (0);
// }
