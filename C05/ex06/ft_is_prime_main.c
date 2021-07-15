/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_prime.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: klasak <klasak@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 15:27:16 by klasak        #+#    #+#                 */
/*   Updated: 2020/09/28 14:59:13 by klasak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int ret;

	ret = ft_is_prime(12);
	printf("%d", ret);
}
