/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecao <hecao@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 20:48:32 by hecao             #+#    #+#             */
/*   Updated: 2025/05/05 16:32:34 by hecao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *ptr1, int *ptr2)
{
	int	temp;

	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				swap(&tab[j], &tab[j + 1]);
			}
			j++;
		}
		i++;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	int test[] = {5,4,3,2,1};
// 	ft_sort_int_tab(test,5);
// 	for(int i = 0;i<5;i++){
// 		printf("%d",test[i]);
// 	}
// }