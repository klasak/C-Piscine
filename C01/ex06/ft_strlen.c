/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: klasak <klasak@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 15:27:16 by klasak        #+#    #+#                 */
/*   Updated: 2020/09/19 11:19:00 by klasak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}