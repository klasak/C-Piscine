#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int		main(void)
{
	int tab[7]={11, 12, 1, 8, 3, 4, 19};
	int size;
	int i;
	
	size=7;
	i=0;		
	ft_sort_int_tab(tab, size);
	
	while (i<size)
    {
        printf("%d", tab[i]);
        printf("%s", " ");
        i++;
    }

}
