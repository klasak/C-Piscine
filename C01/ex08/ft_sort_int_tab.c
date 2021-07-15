/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_int_tab.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: klasak <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 19:34:32 by klasak        #+#    #+#                 */
/*   Updated: 2020/09/22 19:39:06 by klasak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int a;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				a = tab[i];
				tab[i] = tab[j];
				tab[j] = a;
			}
			j++;
		}
		i++;
	}
}
