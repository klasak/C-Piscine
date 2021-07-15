#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char *s1;
	char *s2;
	int ret;
	int ret2;
	
	unsigned int n;		
	
	s1="kasia";
	s2="kanna";
	n=3;
	
	ret=ft_strncmp(s1, s2, n);
	printf("%d\n",ret);
	
	ret2=strncmp(s1,s2,n);
	printf("%d\n",ret2);
    return (0);
  
}
