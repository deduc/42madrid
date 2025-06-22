#include <unistd.h>
#include "constants.h"
#include "check_arguments.h"
#include "solver.h"
#include "board_utils.h"

int main(int argc, char **argv)
{
    int board[BOARD_SIZE][BOARD_SIZE] = {{0}};

    if (argc != 2 || parse_input(argv[1], board) != GAME_SUCCESS)
    {
        write(1, "Error\n", 6);
        return 1;
    }

    if (solve(board, 1, 1))
    {
        print_board(board);
        return 0;
    }
    write(1, "Error\n", 6);
    return 1;
}