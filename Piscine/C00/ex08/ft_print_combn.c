/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecao <hecao@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:14:39 by hecao             #+#    #+#             */
/*   Updated: 2025/05/20 15:47:52 by hecao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_comb(int *nums, int n)
{
	int	i;
	int	is_last;

	i = 0;
	while (i < n)
	{
		ft_putchar(nums[i] + '0');
		i++;
	}
	i = 0;
	is_last = 1;
	while (i < n)
	{
		if (nums[i] != 10 - n + i)
		{
			is_last = 0;
			break ;
		}
		i++;
	}
	if (!is_last)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	solve(int *nums, int digit, int n, int start)
{
	int	i;

	if (digit == n)
	{
		print_comb(nums, n);
		return ;
	}
	i = start;
	while (i <= 9)
	{
		nums[digit] = i;
		solve(nums, digit + 1, n, i + 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	nums[10];

	if (n < 1 || n >= 10)
		return ;
	solve(nums, 0, n, 0);
}
