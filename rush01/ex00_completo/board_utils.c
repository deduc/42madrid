/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-c <igomez-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 20:55:34 by igomez-c          #+#    #+#             */
/*   Updated: 2025/06/22 21:50:00 by igomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "constants.h"
#include "board_utils.h"

void	print_board(int board[BOARD_SIZE][BOARD_SIZE])
{
	char	c;
	int		i;
	int		j;

	i = 1;
	while (i <= GRID_SIZE)
	{
		j = 1;
		while (j <= GRID_SIZE)
		{
			c = board[i][j] + '0';
			write(1, &c, 1);
			if (j < GRID_SIZE)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	is_valid_placement(int board[BOARD_SIZE][BOARD_SIZE], int row, int col,
		int num)
{
	int	i;

	i = 1;
	while (i <= GRID_SIZE)
	{
		if (board[row][i] == num
		|| board[i][col] == num)
			return (FALSE);
		i++;
	}
	return (TRUE);
}

void	copy_board(int src[BOARD_SIZE][BOARD_SIZE],
		int dest[BOARD_SIZE][BOARD_SIZE])
{
	int	i;
	int	j;

	i = 0;
	while (i < BOARD_SIZE)
	{
		j = 0;
		while (j < BOARD_SIZE)
		{
			dest[i][j] = src[i][j];
			j++;
		}
		i++;
	}
}
