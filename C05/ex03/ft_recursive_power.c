/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: klasak <klasak@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 15:27:16 by klasak        #+#    #+#                 */
/*   Updated: 2020/09/28 12:28:52 by klasak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int temp;

	if (power == 0)
		return (1);
	else if (power > 0)
	{
		temp = nb * ft_recursive_power(nb, power - 1);
		return (temp);
	}
	else
		return (0);
}
