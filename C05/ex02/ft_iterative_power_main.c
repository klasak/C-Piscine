/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_power.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: klasak <klasak@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 15:27:16 by klasak        #+#    #+#                 */
/*   Updated: 2020/09/25 17:51:09 by klasak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_iterative_power(int nb, int power);

int main()
{
    int ret;
    
    ret = ft_iterative_power(1,4);
    printf("%d",ret);
}

