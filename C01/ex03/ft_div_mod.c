/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecao <hecao@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 17:14:29 by hecao             #+#    #+#             */
/*   Updated: 2025/05/05 16:03:02 by hecao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>
// int	main(void)
// {
// 	int a = 7;
// 	int b = 3;
// 	int *div = &a;
// 	int *mod = &b;
// 	printf("%d",a);
// 	printf("%d",b);
// 	ft_div_mod(a,b,div,mod);
// 	printf("%d",*div);
// 	printf("%d",*mod);
// }
