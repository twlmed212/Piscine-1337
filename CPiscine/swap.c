#include <stdio.h>


void	ft_swap(int *a, int *b)
{

	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
int main()
{
	int a;
	int b;

	a = 10;
	b = 20;

	printf("a = %d, b = %d", a, b );

	ft_swap(&a, &b);

	printf("a = %d, b = %d", a, b );

}
