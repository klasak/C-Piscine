#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{

	int *a;
	int *b;
	int aa;
	int bb;
	
	aa=17;
	bb=5;
	
	a=&aa;
	b=&bb;

	ft_ultimate_div_mod(a, b);

	printf("%d ", aa);	
	printf("%d ", bb);
		
return (0);
}

