#ifndef BOARD_UTILS_H
#define BOARD_UTILS_H

void print_board(int board[BOARD_SIZE][BOARD_SIZE]);
int is_valid_placement(int board[BOARD_SIZE][BOARD_SIZE], int row, int col, int num);
int check_visibility(int board[BOARD_SIZE][BOARD_SIZE]);
int count_visible(int *line);
void copy_board(int src[BOARD_SIZE][BOARD_SIZE], int dest[BOARD_SIZE][BOARD_SIZE]);

#endif