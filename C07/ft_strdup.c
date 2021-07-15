/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: klasak <klasak@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 15:27:16 by klasak        #+#    #+#                 */
/*   Updated: 2020/09/20 10:38:49 by klasak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strdup(char *src);

int main(void)
{
    char *src;
	char *ret;
//	char *ret2;
	
	
    src = "My name is Kasia";
    
    ret = ft_strdup(src);
	//ret2=strdup(src);
    
    printf("%s\n", ret);
    //printf("%s\n", ret2);
	return (0);
}

char *ft_strdup(char *src)
{
	char *src2;
	int c;
	int i;
//	char *temp;
	char *temp2;

	i = 0;
	c = 0;

	if(src[0] = '\0')
		return ((char *)NULL);

//	temp =src;
	
	while (src[i] != '\0')
	{
		i++;
	}
//	i=strlen(src);	
//	src2 =(char *)malloc(sizeof(char)*(i+1));
	src2 = malloc(i+1);
	temp2=src2;
	
	while (src != '\0')
	{
	temp2[c]=src[c];
	c++;
	}
	temp2[c] = '\0';
	return (temp2);
}


