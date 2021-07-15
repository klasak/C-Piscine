/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: klasak <klasak@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 15:27:16 by klasak        #+#    #+#                 */
/*   Updated: 2020/09/28 16:36:49 by klasak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int ret;
	int ret2;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);

	ret = nb;

	while (nb > 1)
	{
		ret2 = ret * (nb - 1);
		ret = ret2;
		nb--;
	}
	return (ret);
}
