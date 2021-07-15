/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_non_printable_main.c                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: klasak <klasak@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 15:27:16 by klasak        #+#    #+#                 */
/*   Updated: 2020/09/22 20:21:31 by klasak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putstr_non_printable(char *str);

int main(void)
{
	char *str;
	str="Çkasia";
	
	ft_putstr_non_printable(str);
	return (0);
}


void ft_putstr_non_printable(char *str)
{
	int c;
	c=0;

	while(str[c]!='\0')
	{
		if(str[c]< 32 || str[c]> 127)
		{	
			write(1, "\\", 1);
			write(1, &str[c], 1);
		}	
	
	 	if(str[c]>=32 && str[c] <=127)
	 	{
	
			write(1, &str[c], 1);
		}			
	c++;
	}	 					


}

	

