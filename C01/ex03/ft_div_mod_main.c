#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{

	int a;
	int b;
	int c;
	int d;
	
	int *div;
	int *mod;
	
	a=253;
	b=5;
	
	div=&c;
	mod=&d;
	
	ft_div_mod(a, b, div, mod);

	printf("%d ", c);	
	printf("%d ", d);
		
return (0);
}
