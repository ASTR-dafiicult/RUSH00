void ft_putchar(char c);

void rush(int col, int row)
{
    int i;
    int j;
    
    i = 0;
    while(i < row)
    {
        j = 0;
        while(j < col)
        {
            if(i == 0 && (j + 1 == col || j == 0))
                ft_putchar('A');
            else if(i + 1 == row && (j + 1 == col || j == 0))
                ft_putchar('C');
            else if(i == 0 || i + 1 == row)
                ft_putchar('B');
            else if(i != 0 && (j == 0 || j + 1 == col))
                ft_putchar('B');
            else
                ft_putchar(' ');
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}
//ABBBA
//B   B
//CBBBC
//