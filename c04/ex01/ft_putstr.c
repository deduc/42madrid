#include <unistd.h>

void ft_putstr(char *str)
{
    int len = 0;
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
    
}

int main()
{
    ft_putstr("hola que tal BROUSton");
    return 0;
}