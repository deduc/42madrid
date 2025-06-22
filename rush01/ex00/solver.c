#include "constants.h"
#include "board_utils.h"

int solve(int board[BOARD_SIZE][BOARD_SIZE], int row, int col)
{
    if (row > GRID_SIZE)
        return check_visibility(board);

    int next_row = (col == GRID_SIZE) ? row + 1 : row;
    int next_col = (col == GRID_SIZE) ? 1 : col + 1;

    for (int num = 1; num <= GRID_SIZE; num++)
    {
        if (is_valid_placement(board, row, col, num))
        {
            board[row][col] = num;
            if (solve(board, next_row, next_col))
                return TRUE;
            board[row][col] = 0;
        }
    }
    return FALSE;
}