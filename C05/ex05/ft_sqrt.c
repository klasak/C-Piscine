/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: klasak <klasak@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 15:27:16 by klasak        #+#    #+#                 */
/*   Updated: 2020/09/28 17:06:38 by klasak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		if (i * i == nb)
			return (i);
		else if (i * i > nb)
			return (0);
		else
			i++;
	}
	return (0);
}
