/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: klasak <klasak@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 15:27:16 by klasak        #+#    #+#                 */
/*   Updated: 2020/09/21 16:32:03 by klasak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char *str;

	str = "&";
	ft_str_is_alpha(str);
}
