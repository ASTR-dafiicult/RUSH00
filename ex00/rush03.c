void ft_putchar(char c);


void set_print(int col, char c1, char c2)
{
    int i;

    ft_putchar(c1);
    i = 0;
    while(i < col - 2)
    {
        ft_putchar('B');
        i++;
    }

    if(i >= 1)
        ft_putchar(c2);
    ft_putchar('\n');
}
void rush(int x, int y) // col row
{
    int i;
    int j;

    set_print(x, 'A', 'C');
    i = 0;
    while(i < y - 2)
    {
        ft_putchar('B');
        j = 0;
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
        set_print(x, 'A', 'C');
}