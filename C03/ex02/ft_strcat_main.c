#include <strings.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
	char *src;
	char dest[50]="mam";
	char *src2;
	char dest2[50]="mam";
	
	src="moja";
	src2=src;
	
	ft_strcat(dest, src);
	printf("%s\n", dest);

	strcat(dest2, src2);
	printf("%s\n", dest2);
		
	return (0);
}

