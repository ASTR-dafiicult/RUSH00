# include <unistd.h>


void ft_putchar(char c);

void print(int x, char s1, char s2)
{
    int i;

    i = 0;
    ft_putchar(s1);
    while(i < x - 2)
    {
        ft_putchar('*');
        i++;
    }
    if(i >= 1)
        ft_putchar(s2);
    ft_putchar('\n');
}            
void rush(int x, int y)
{
    int i;
    int j;

    i = 0;
    print(x, '/', '\\');
    while(i < y - 2)
    {
        ft_putchar('*');
        j = 0;
        while(j < x - 2)
        {
            ft_putchar(' ');
            j++;
        }
        if(x > 1)
            ft_putchar('*');
        ft_putchar('\n');
        i++;
    }
    if(y > 1)
    {
        print(x, '\\', '/');
    }
}