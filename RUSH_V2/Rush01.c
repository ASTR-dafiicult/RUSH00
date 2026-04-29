void ft_putchar(char c);


void rush(int x, int y)
{
    int i;
    int j;
    int access1;
    int access2;


    access1 = 0;
    access2 = 1;
    i = 0;
    while(i < y)
    {
        j = 0;
        access1 = 0;
        while(j < x)
        {
            if(access2 && ((i == 0 && j == 0) || (i + 1 == y && j + 1 == x)))
            {
                ft_putchar('/');
                access2 = 0;
                access1 = 0;
            }
            else if(!access1 && ((i + 1 == y && j == 0) || (i == 0 && j + 1 == x)))
            {
                ft_putchar('\\');
                access1 = 1;
                access2 = 1;
            }
            else if(i == 0 || i + 1 == y)
            {
                ft_putchar('*');
            }
            else if(j == 0 || j + 1 == x)
            {
                ft_putchar('*');
            }
            else
                ft_putchar(' ');
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}
/**\
* *
* *
\**/
