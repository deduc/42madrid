#include <unistd.h>
#include "constants.h"
#include "board_utils.h"

void print_board(int board[BOARD_SIZE][BOARD_SIZE])
{
    char c;
    for (int i = 1; i <= GRID_SIZE; i++)
    {
        for (int j = 1; j <= GRID_SIZE; j++)
        {
            c = board[i][j] + '0';
            write(1, &c, 1);
            if (j < GRID_SIZE)
                write(1, " ", 1);
        }
        write(1, "\n", 1);
    }
}

int count_visible(int *line)
{
    int max = 0;
    int visible = 0;
    for (int i = 0; i < GRID_SIZE; i++)
    {
        if (line[i] > max)
        {
            max = line[i];
            visible++;
        }
    }
    return visible;
}

int check_visibility(int board[BOARD_SIZE][BOARD_SIZE])
{
    int temp[GRID_SIZE];
    int i, j;

    for (i = 1; i <= GRID_SIZE; i++)
    {
        for (j = 0; j < GRID_SIZE; j++)
            temp[j] = board[i][j + 1];
        if (count_visible(temp) != board[i][0])
            return FALSE;
        for (j = 0; j < GRID_SIZE; j++)
            temp[j] = board[i][GRID_SIZE - j];
        if (count_visible(temp) != board[i][5])
            return FALSE;
    }

    for (j = 1; j <= GRID_SIZE; j++)
    {
        for (i = 0; i < GRID_SIZE; i++)
            temp[i] = board[i + 1][j];
        if (count_visible(temp) != board[0][j])
            return FALSE;
        for (i = 0; i < GRID_SIZE; i++)
            temp[i] = board[GRID_SIZE - i][j];
        if (count_visible(temp) != board[5][j])
            return FALSE;
    }
    return TRUE;
}

int is_valid_placement(int board[BOARD_SIZE][BOARD_SIZE], int row, int col, int num)
{
    for (int i = 1; i <= GRID_SIZE; i++)
    {
        if (board[row][i] == num || board[i][col] == num)
            return FALSE;
    }
    return TRUE;
}

void copy_board(int src[BOARD_SIZE][BOARD_SIZE], int dest[BOARD_SIZE][BOARD_SIZE])
{
    for (int i = 0; i < BOARD_SIZE; i++)
        for (int j = 0; j < BOARD_SIZE; j++)
            dest[i][j] = src[i][j];
}