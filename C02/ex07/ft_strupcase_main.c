/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strupcase_main.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: klasak <klasak@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 15:27:16 by klasak        #+#    #+#                 */
/*   Updated: 2020/09/19 09:39:59 by klasak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str);

int main(void)
{
    char str[]="My StrRRing&";

    ft_strupcase(str);
    printf("%s", str);
    return (0);
}
