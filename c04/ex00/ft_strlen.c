#include <stdio.h>

int ft_strlen(char *str)
{
    int size;

    size = 0;
    while (*str)
    {
        size++;
        str++;
    }
    return size;
}

int main()
{
    printf("%i", ft_strlen("Hola"));
    
    return 0;
}