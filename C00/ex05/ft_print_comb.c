/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: klasak <klasak@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 16:34:16 by klasak        #+#    #+#                 */
/*   Updated: 2020/09/16 17:11:18 by klasak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int i, int j, int k)
{
	ft_putchar(i + '0');
	ft_putchar(j + '0');
	ft_putchar(k + '0');
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < 10)
	{
		j = i + 1;
		while (j < 10)
		{
			k = j + 1;
			while (k < 10)
			{
				ft_print(i, j, k);
				if (i < 7)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
