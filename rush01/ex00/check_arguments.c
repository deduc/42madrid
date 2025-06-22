#include "constants.h"
#include "check_arguments.h"

int parse_input(char *input_str, int board[BOARD_SIZE][BOARD_SIZE])
{
    int count = 0;

    while (*input_str)
    {
        if (*input_str >= '1' && *input_str <= '4')
        {
            int val = *input_str - '0';
            if (count < 4)
                board[0][count + 1] = val;
            else if (count < 8)
                board[5][count - 3] = val;
            else if (count < 12)
                board[count - 7][0] = val;
            else if (count < 16)
                board[count - 11][5] = val;
            else
                return GAME_ERROR;
            count++;
        }
        else if (*input_str != ' ')
            return GAME_ERROR;
        input_str++;
    }
    return (count == 16) ? GAME_SUCCESS : GAME_ERROR;
}