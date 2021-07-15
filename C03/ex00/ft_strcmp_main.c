#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
	char *s1;
	char *s2;
	int ret;
	int ret2;
		
    s1="kasia";
	s2="kas";
	
	ret=ft_strcmp(s1, s2);
	printf("%d\n",ret);

	ret2=strcmp(s1, s2);
	printf("%d\n",ret2);
    return (0);
}
