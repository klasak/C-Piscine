/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: klasak <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 18:18:19 by klasak        #+#    #+#                 */
/*   Updated: 2020/09/27 13:08:43 by klasak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_negative(int nb)
{
	int nnb;

	ft_putchar('-');
	nnb = (-1) * nb;
	nb = nnb;
	return (nb);
}

int		ft_count(int nb)
{
	int number;
	int i;

	i = 0;
	number = nb;
	while (number / 10 > 0)
	{
		i++;
		number = number / 10;
	}
	return (i);
}

void	ft_print(int nb, int i)
{
	int j;
	int div;

	while (i >= 0)
	{
		j = 1;
		div = 1;
		while (j <= i)
		{
			div = div * 10;
			j++;
		}
		ft_putchar((nb / div) % 10 + '0');
		div = div / 10;
		i--;
	}
}

void	ft_putnbr(int nb)
{
	int i;

	if (nb >= 0)
	{
		i = ft_count(nb);
		ft_print(nb, i);
	}
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
		}
		else
		{
			nb = ft_negative(nb);
			i = ft_count(nb);
			ft_print(nb, i);
		}
	}
}
