#include <unistd.h>

int g_i;
int g_nnb;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_negative(nb)
{
	ft_putchar('-');
	g_nnb = ~nb + 1;

	return(g_nnb);
}

int	ft_count(int g_nb)
{
	int number;

	g_i=0;
	number=g_nb;

	while(number/10>0)
	{			
		g_i++;
		number=number/10;
	}	
return(g_i);
}

void ft_print(int g_nnb)
{
	int j;
	int div;
	
	while (g_i >= 0)
	{
		j = 1;
		div = 1;
		while (j <= g_i)
		{
			div = div * 10;
			j++;
		}
		ft_putchar((g_nnb / div) % 10 + '0');
		div = div / 10;
		g_i--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb<0)
	{
	ft_negative(nb);
	}	
	else g_nnb=nb;
	
	ft_count(g_nnb);
	ft_print(g_nnb);

}
