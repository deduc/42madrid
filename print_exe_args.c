// void ft_putnbr(int nb)
// {
    
// }

#include <stdio.h>
#include <unistd.h>

void print_program_name(int n, char **args)
{
    int len = 0;
    while (args[0][len])
    {
        write(1, &args[0][len], 1);
        len++;
    }
    write(1, "\n", 1);
    write(1, "----\n", 5);
}

void print_args_but_not_program_name(int n, char **args)
{
    if (n >= 1)
    {
        int index = 0;
        int index2 = 0;
        while (index < n)
        {
            index2 = 0;
            while (args[index][index2])
            {
                write(1, &args[index][index2], 1);
                index2++;
            }
            write(1, "\n", 1);
            index++;
        }
        write(1, "----\n", 5);
    }
}

void print_all_args_in_reverse(int n, char **args)
{
    int i1 = n;
    int i2 = 0;
    int index = 0;
    int index2 = 0;

    if (n > 0)
    {
        int i1 = n - 1;
        int i2 = 0;

        while (i1 >= 0)
        {
            i2 = 0;
            while (args[i1][i2])
            {
                write(1, &args[i1][i2], 1);
                i2++;
            }
            write(1, "\n", 1);;
            i1--;
        }
    }
    write(1, "----\n", 5);
}

int main(int n, char **args)
{
    print_program_name(n, args);
    print_args_but_not_program_name(n, args);
    print_all_args_in_reverse(n, args);
    
    return 0;
}