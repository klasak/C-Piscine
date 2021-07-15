/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcapitalize_main.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: klasak <klasak@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 15:27:16 by klasak        #+#    #+#                 */
/*   Updated: 2020/09/22 20:21:31 by klasak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str);

int main(void)
{
	char str[]="7 kAS+*ALF ";
	
	ft_strcapitalize(str);

	printf("%s", str);

}


