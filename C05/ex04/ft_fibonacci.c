/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_fibonacci.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: klasak <klasak@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 15:27:16 by klasak        #+#    #+#                 */
/*   Updated: 2020/09/28 17:00:56 by klasak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int i;
	int n;

	i = 2;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	while (i < index + 1)
	{
		n = ft_fibonacci(i - 1) + ft_fibonacci(i - 2);
		i++;
	}
	return (n);
}
