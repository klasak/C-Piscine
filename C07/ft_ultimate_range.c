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

int *ft_ultimate_range(int **range, int min, int max);

int main(void)
{
 	int *ret;
 	int **arr;
 	
    ret=ft_ultimate_range(arr, 3, 5);
   
   // printf("%d", ret[0]);
   // printf("%d", ret[1]); 
    
	return (0);
}

int *ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int c;
	
	if(min >= max)
		return(0);
		
	*range = malloc((max - min) * sizeof(int));
	
	if (*range='\0')
		return (0);
				
	c=0;
	while(c < max-min)
	{
	*range[c] = min + c;
	printf("%d", range[c]);
	c++;
	}

	return(0);
}
	


