void ft_putchar(char c);


void set_print(int col, char c1)
{
    int i;

    ft_putchar(c1);// /A /C
    i = 0;
    while(i < col - 2)
    {
        ft_putchar('B');
        i++;
    }
    if(i >= 1)
    {
        ft_putchar(c1);
    }
    ft_putchar('\n');
}
void rush(int x, int y) // col, row
{
    int i;
    int j;
    
    i = 0;
    set_print(x, 'A');
    while(i < y - 2)
    {
        j = 0;
        ft_putchar('B');
        while(j < x - 2)
        {
            ft_putchar(' ');
            j++;
        }
        if(x > 1)
            ft_putchar('B');
        ft_putchar('\n');
        i++;
    }
    if(y > 1)
        set_print(x, 'C');
}