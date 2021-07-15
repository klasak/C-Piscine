#include <stdio.h>

void ft_ft(int *nbr);

int main(void)
{
	int a;
	int *nbr;
	nbr = &a;
	a=3;

	printf("%d\n",a);

	ft_ft(nbr);

    printf("%d\n",a);
	
return(0);
}
