/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecao <hecao@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:04:17 by hecao             #+#    #+#             */
/*   Updated: 2025/05/15 22:22:52 by hecao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(int *board, int col, int row)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (board[i] == row || (board[i] - i == row - col) || (board[i]
				+ i == row + col))
			return (0);
		i++;
	}
	return (1);
}

void	print_board(int *board)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = board[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	solve(int col, int *board)
{
	int	row;
	int	count;

	if (col == 10)
	{
		print_board(board);
		return (1);
	}
	row = 0;
	count = 0;
	while (row < 10)
	{
		if (check(board, col, row))
		{
			board[col] = row;
			count += solve(col + 1, board);
		}
		row++;
	}
	return (count);
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];

	return (solve(0, board));
}
// #include <stdio.h>

// int	main(void)
// {
// 	int i = ft_ten_queens_puzzle();
// 	printf("%d", i);
// }