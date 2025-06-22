#include <unistd.h>
#include <stdio.h>
#include "constants.h"
#include "check_arguments.h"

int main(int args_number, char **args)
{
    int gamemode;
    int args_are_ok;

    gamemode = GAMEMODE_4x4;

    args_are_ok = check_args(args_number, gamemode);
    
    if (args_are_ok) { 
        args_are_ok = 1;
        args = args;
    }

    printf("%i\n", args_are_ok);
}