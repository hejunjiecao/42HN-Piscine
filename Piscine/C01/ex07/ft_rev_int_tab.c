/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecao <hecao@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 19:26:40 by hecao             #+#    #+#             */
/*   Updated: 2025/05/08 16:56:09 by hecao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int test[] = {1, 2, 3, 4, 5};
// 	ft_rev_int_tab(test, 5);
// 	for (int i = 0; i < 5; i++)
// 	{
// 		printf("%d", test[i]);
// 	}
// }