/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_params.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: klasak <klasak@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 15:27:16 by klasak        #+#    #+#                 */
/*   Updated: 2020/09/26 17:50:43 by klasak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*src;
	int		i;
	int		j;

	i = argc - 1;
	while (i > 0)
	{
		src = argv[i];
		j = 0;
		while (src[j] != '\0')
		{
			write(1, &src[j], 1);
			j++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
