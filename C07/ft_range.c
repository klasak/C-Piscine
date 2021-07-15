/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: klasak <klasak@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 15:27:16 by klasak        #+#    #+#                 */
/*   Updated: 2020/09/20 10:38:49 by klasak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <stdlib.h>
#include<unistd.h>

int *ft_range(int min, int max);

int main(void)
{
 	int *ret;
 	
    ret=ft_range(3, 5);
    printf("%d", ret[0]);
    printf("%d", ret[1]); 
    
	return (0);
}

int *ft_range(int min, int max)
{
	int i;
	int c;
	int *arr;
	
	if(min >= max)
	return(NULL);
	
	i=max-min;
	arr=(int*) malloc((i)*sizeof(int));

	c=0;
	while(c<i)
	{
		arr[c]=min+c;
		c++;
	}

return(arr);
}



