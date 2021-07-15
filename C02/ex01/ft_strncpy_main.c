/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy_main.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: klasak <klasak@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 15:27:16 by klasak        #+#    #+#                 */
/*   Updated: 2020/09/19 09:39:59 by klasak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
    unsigned int n;
    char *src;
    char dest[] = "My name is";

    src = "Kasia";
    
    n=3;
    
   ft_strncpy(dest, src, n);
  
   printf("%s\n", dest);
  
    return (0);
}

