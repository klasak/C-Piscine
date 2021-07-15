#include <unistd.h>

void	ft_putchar(char c);
void	ft_rev_int_tab(int *tab, int size);

int		main(void)
{
	int tab[7]={2, 8, 9, 1, 3,1, 4};
	int size;
    int i;
    
    size=7;
	i=0;
	
	ft_rev_int_tab(tab, size);
	
	while (i<size)
    {
        ft_putchar(tab[i]+'0');
        i++;
    }
    
    return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

