#include <stdio.h>
#include <strings.h>
#include <unistd.h>

char *ft_strstr(char *str, char *to_find);

int main(void)
{
	char *str;
	char *to_find;
	char *ret;
	char *ret2;
		
	str="abcHello World!";
	to_find="";
	
	ret = ft_strstr(str, to_find);
	printf("%s\n", ret);
	
	ret2 = strstr(str, to_find);
	printf("%s\n", ret2);
}
