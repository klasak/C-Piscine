/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: klasak <klasak@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 15:27:16 by klasak        #+#    #+#                 */
/*   Updated: 2020/09/27 13:29:53 by klasak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int ret;
	int ret2;

	if (power == 0)
	{
		return (1);
	}
	if (power == 1)
	{
		return (nb);
	}
	if (power > 1)
	{
		ret = nb;
		while (power > 1)
		{
			ret2 = ret * nb;
			ret = ret2;
			power--;
		}
		return (ret);
	}
	else
		return (0);
}
