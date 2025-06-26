#include <stdio.h>
#include "check_arguments.h"
#include "constants.h"

int check_args(int args_number, int gamemode)
{
    int checked;

    checked = check_number_of_args(args_number, gamemode);
    return checked;
}

int check_number_of_args(int args_number, int gamemode)
{
    int result;
    
    args_number = args_number - 1;
    result = FALSE;
    if (args_number == ARGS_NUMBER_4x4 && gamemode == GAMEMODE_4x4)
    {
        result = GAMEMODE_4x4;
    }
    else if (args_number == ARGS_NUMBER_9x9 && gamemode == GAMEMODE_9x9)
    {
        result = GAMEMODE_9x9;
    }
    else {
        result = 0;
        printf("ERROR, nº de argumentos invalidos %i", args_number);
    }

    return result;
}