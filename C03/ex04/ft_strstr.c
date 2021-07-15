/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: klasak <klasak@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 15:27:16 by klasak        #+#    #+#                 */
/*   Updated: 2020/09/27 18:03:30 by klasak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int c;
	int i;
	int d;

	c = 0;
	i = 0;
	if (to_find[0] == '\0')
	{
		return (&str[0]);
	}
	while (str[c] != '\0')
	{
		if (str[c] == to_find[0])
		{
			d = c;
			while (str[c] == to_find[i])
			{
				c++;
				i++;
				if (to_find[i] == '\0')
				{
					return (&str[d]);
				}
			}
		}
		c++;
	}
	return (NULL);
}
