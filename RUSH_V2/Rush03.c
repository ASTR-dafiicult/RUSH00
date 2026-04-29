void ft_putchar(char c);

void rush(int x, int y)
{

    if(x <= 0 || y <= 0)
        return;
        
    int i;
    int j;

    i = 0;
    while(i < y)
    {
        j = 0;
        while(j < x)
        {
            if((i == 0 || i + 1 == y) && j == 0)
                ft_putchar('A');
            else if((i == 0 || i + 1 == y) && j + 1 == x)
                ft_putchar('C');
            else if((i == 0 || i + 1 == y) && j != 0)
                ft_putchar('B');
            else if(j == 0 || j + 1 == x)
                ft_putchar('B');
            else
                ft_putchar(' ');
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}
//ABBBC
//B   B
//ABBBC