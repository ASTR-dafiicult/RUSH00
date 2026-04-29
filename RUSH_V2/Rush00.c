# include <unistd.h>


void ft_putchar(char c);
void rush(int x, int y)
{
    int i;
    int j;

    //o---o
    //|   |
    //o---o
    i = 0;
    while(i < y)
    {
        j = 0;
        while(j < x)
        {
            if((i + 1 == y || i == 0) && j == 0)
                ft_putchar('o');

            else if((j + 1 == x) && (i == 0 || i + 1 == y))
                ft_putchar('o');
            
            else if((i == 0 || i + 1 == y))
                ft_putchar('-');
            
            else if((j == 0 || j + 1 == x) && i != 0)
                ft_putchar('|');
            
            else    
                ft_putchar(' ');
            j++;
        }
        ft_putchar('\n');
        i++;
    }    
}