/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecao <hecao@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 17:15:25 by hecao             #+#    #+#             */
/*   Updated: 2025/05/05 16:12:12 by hecao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// #include <stdio.h>
// int	main(void)
// {
// 	int a = 7;
// 	int b = 3;
// 	printf("%d",a);
// 	printf("%d",b);
// 	ft_ultimate_div_mod(&a,&b);
// 	printf("%d",a);
// 	printf("%d",b);
// }