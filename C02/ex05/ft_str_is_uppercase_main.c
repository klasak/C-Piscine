/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_uppercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: klasak <klasak@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 15:27:16 by klasak        #+#    #+#                 */
/*   Updated: 2020/09/19 09:39:59 by klasak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main(void)
{
    char *str;
    
    str = "aAB";

    ft_str_is_uppercase(str);
}
