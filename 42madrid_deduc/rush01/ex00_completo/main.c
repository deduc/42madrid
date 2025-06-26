/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-c <igomez-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 23:15:00 by igomez-c          #+#    #+#             */
/*   Updated: 2025/06/22 23:15:00 by igomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "constants.h"
#include "check_arguments.h"
#include "solver.h"
#include "board_utils.h"

static void	init_board(int board[BOARD_SIZE][BOARD_SIZE])
{
	int	i;
	int	j;

	i = 0;
	while (i < BOARD_SIZE)
	{
		j = 0;
		while (j < BOARD_SIZE)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	board[BOARD_SIZE][BOARD_SIZE];

	init_board(board);
	if (argc != 2 || parse_input(argv[1], board) != GAME_SUCCESS)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (solve(board, 1, 1) == TRUE)
	{
		print_board(board);
		return (0);
	}
	write(1, "Error\n", 6);
	return (1);
}
