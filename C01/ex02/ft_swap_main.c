#include <stdio.h>

void ft_swap(int *a, int *b);

int main(void)
{

	int aa;
	int bb;
	int *a;
	int *b;
	
	aa=27;
	bb=89;
	
	a=&aa;
	b=&bb;
	
	printf("%d ", aa);	
	printf("%d ", bb);	
		
	ft_swap(a, b);
		
	printf("%d ", aa);	
	printf("%d ", bb);	
	
return (0);
}

