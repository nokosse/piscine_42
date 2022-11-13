
#include "ft_putnbr.c"
#include "atoi.c"
/*
         1  2  3  4
        3          4
        4          1
        1          2
        2          3
         2  3  4  1
*/



int	main(int argc, char **argv)
{
    //ft_verif(argc, argv);
    int i = 0;
    int j;

    int tab[4][4] = {{1,2,3,4},{2,3,4,1},{3,4,1,2},{4,1,2,3}};
    
    while(i <= 3)
    {
        j = 0;
        while(j <= 3)
        {
            ft_putnbr(tab[i][j]);
            ft_putchar(' ');
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}