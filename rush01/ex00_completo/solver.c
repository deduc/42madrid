/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-c <igomez-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 22:30:00 by igomez-c          #+#    #+#             */
/*   Updated: 2025/06/22 22:30:00 by igomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "constants.h"
#include "board_utils.h"

static int	next_position(int row, int col, int *next_row, int *next_col)
{
	if (col == GRID_SIZE)
	{
		*next_row = row + 1;
		*next_col = 1;
	}
	else
	{
		*next_row = row;
		*next_col = col + 1;
	}
	return (0);
}

int	solve(int board[BOARD_SIZE][BOARD_SIZE], int row, int col)
{
	int	num;
	int	next_row;
	int	next_col;

	if (row > GRID_SIZE)
		return (check_visibility(board));
	next_position(row, col, &next_row, &next_col);
	num = 1;
	while (num <= GRID_SIZE)
	{
		if (is_valid_placement(board, row, col, num) == TRUE)
		{
			board[row][col] = num;
			if (solve(board, next_row, next_col) == TRUE)
				return (TRUE);
			board[row][col] = 0;
		}
		num++;
	}
	return (FALSE);
}
