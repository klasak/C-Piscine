#include <strings.h>
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char *src;
	char dest[30]="mam";
	char *src2;
	char dest2[30]="mam";
	unsigned int nb;
	
    nb=2;
	src="tilde";
	src2=src;
	
	ft_strncat(dest, src, nb);
	printf("%s\n", dest);
    
    printf("%s\n", "check:");
	
    strncat(dest2, src2, nb);
	printf("%s\n", dest2);
		
	return (0);
}
