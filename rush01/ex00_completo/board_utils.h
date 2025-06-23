/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_utils.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-c <igomez-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 22:12:42 by igomez-c          #+#    #+#             */
/*   Updated: 2025/06/22 22:12:43 by igomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOARD_UTILS_H
# define BOARD_UTILS_H

void	print_board(int board[BOARD_SIZE][BOARD_SIZE]);
int		is_valid_placement(int board[BOARD_SIZE][BOARD_SIZE], int row, int col,
			int num);
int		check_visibility(int board[BOARD_SIZE][BOARD_SIZE]);
int		count_visible(int *line);
void	copy_board(int src[BOARD_SIZE][BOARD_SIZE],
			int dest[BOARD_SIZE][BOARD_SIZE]);

#endif
