int main()
{
    unsigned long a1 = 0;
    unsigned long a2 = 1;
    unsigned long a_aux;
    unsigned long index = 0;

    printf("%li\n%li\n", a1, a2);
    while (index < 90)
    {
        a_aux = a1 + a2;
        a1 = a2;
        a2 = a_aux;
        printf("%li\n", a2);
        index++;
    }
    
}