/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecao <hecao@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 17:05:50 by hecao             #+#    #+#             */
/*   Updated: 2025/05/05 14:08:51 by hecao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
// #include <stdio.h>
// int	main(void)
// {
// 	int a = 3;
// 	int b = 4;
// 	printf("%d",a);
// 	printf("%d",b);
// 	ft_swap(&a, &b);
// 	printf("%d",a);
// 	printf("%d",b);
// }
