/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-c <igomez-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 22:40:00 by igomez-c          #+#    #+#             */
/*   Updated: 2025/06/22 22:50:00 by igomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "constants.h"
#include "check_arguments.h"

static int	set_board_value(int count, int val,
int board[BOARD_SIZE][BOARD_SIZE])
{
	if (count < 4)
		board[0][count + 1] = val;
	else if (count < 8)
		board[5][count - 3] = val;
	else if (count < 12)
		board[count - 7][0] = val;
	else if (count < 16)
	{
		board[count - 11][5] = val;
	}
	else
		return (GAME_ERROR);
	return (GAME_SUCCESS);
}

int	parse_input(char *input, int board[BOARD_SIZE][BOARD_SIZE])
{
	int	count;
	int	val;
	int	ret;

	count = 0;
	while (*input)
	{
		if (*input >= '1' && *input <= '4')
		{
			val = *input - '0';
			ret = set_board_value(count, val, board);
			if (ret == GAME_ERROR)
				return (GAME_ERROR);
			count++;
		}
		else if (*input != ' ')
			return (GAME_ERROR);
		input++;
	}
	if (count == 16)
		return (GAME_SUCCESS);
	return (GAME_ERROR);
}
