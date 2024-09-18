#include <stdio.h>

int main()
{
	char i[] = "abcdef";
	printf("%p\n", &i[0]);
	printf("%p\n", &i[1]);
	return 0;
}