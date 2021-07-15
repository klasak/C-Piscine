#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
	char *str;
    int c;
    
	str = "momo";
	
	c= ft_strlen(str);
    
    printf("%d", c);

    return(0);
}
