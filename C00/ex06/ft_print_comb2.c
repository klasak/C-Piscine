/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb2.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: klasak <klasak@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 16:34:16 by klasak        #+#    #+#                 */
/*   Updated: 2020/09/16 13:54:52 by klasak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int number)
{
	ft_putchar((number / 10) % 10 + '0');
	ft_putchar(number % 10 + '0');
}

void	ft_display(int i, int j)
{
	{
		ft_print(i);
		ft_putchar(' ');
		ft_print(j);
		if (i < 98 || j < 99)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while (i < 100)
	{
		j = 0;
		while (j < 100)
		{
			if (i < j)
			{
				ft_display(i, j);
			}
			j++;
		}
		i++;
	}
}
