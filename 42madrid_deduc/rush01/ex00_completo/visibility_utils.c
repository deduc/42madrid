/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visibility_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-c <igomez-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 21:10:00 by igomez-c          #+#    #+#             */
/*   Updated: 2025/06/22 21:50:00 by igomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "constants.h"
#include "board_utils.h"

int	count_visible(int *line)
{
	int	max;
	int	visible;
	int	i;

	max = 0;
	visible = 0;
	i = 0;
	while (i < GRID_SIZE)
	{
		if (line[i] > max)
		{
			max = line[i];
			visible++;
		}
		i++;
	}
	return (visible);
}

int	check_row_visibility(int board[BOARD_SIZE][BOARD_SIZE], int row)
{
	int	temp[GRID_SIZE];
	int	j;

	j = 0;
	while (j < GRID_SIZE)
	{
		temp[j] = board[row][j + 1];
		j++;
	}
	if (count_visible(temp) != board[row][0])
		return (FALSE);
	j = 0;
	while (j < GRID_SIZE)
	{
		temp[j] = board[row][GRID_SIZE - j];
		j++;
	}
	if (count_visible(temp) != board[row][5])
		return (FALSE);
	return (TRUE);
}

int	check_col_visibility(int board[BOARD_SIZE][BOARD_SIZE], int col)
{
	int	temp[GRID_SIZE];
	int	i;

	i = 0;
	while (i < GRID_SIZE)
	{
		temp[i] = board[i + 1][col];
		i++;
	}
	if (count_visible(temp) != board[0][col])
		return (FALSE);
	i = 0;
	while (i < GRID_SIZE)
	{
		temp[i] = board[GRID_SIZE - i][col];
		i++;
	}
	if (count_visible(temp) != board[5][col])
		return (FALSE);
	return (TRUE);
}

int	check_visibility(int board[BOARD_SIZE][BOARD_SIZE])
{
	int	i;

	i = 1;
	while (i <= GRID_SIZE)
	{
		if (!check_row_visibility(board, i))
			return (FALSE);
		if (!check_col_visibility(board, i))
			return (FALSE);
		i++;
	}
	return (TRUE);
}
