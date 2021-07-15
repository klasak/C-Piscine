/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_program_name.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: klasak <klasak@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 15:27:16 by klasak        #+#    #+#                 */
/*   Updated: 2020/09/28 13:22:52 by klasak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*src;
	int		i;

	src = argv[0];
	i = 0;
	if (argc >= 1)
	{
		while (src[i] != '\0')
		{
			write(1, &src[i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
