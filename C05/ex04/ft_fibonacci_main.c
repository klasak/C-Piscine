/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_fibonacci.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: klasak <klasak@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 15:27:16 by klasak        #+#    #+#                 */
/*   Updated: 2020/09/28 12:14:51 by klasak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	int ret;

	ret = ft_fibonacci(9);
	printf("%d", ret);
}
