/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy_main.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: klasak <klasak@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 15:27:16 by klasak        #+#    #+#                 */
/*   Updated: 2020/09/19 09:39:59 by klasak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char *ft_strcpy(char *dest, char *src);

int main(void)
{
    char *src;
    char dest[]="";

    src = "My name is Kasia";
    
    ft_strcpy(dest, src);
    printf("%s\n", dest);
    return (0);
}
