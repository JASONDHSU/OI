//Problem: output an inverted Triangle

#include <stdio.h>

int main()
{	
	int x;
	scanf_s("%d", &x);
	for (int i = 1; i <= x; i++)
	{
		for (int a = 1; a <= i ; a++)	printf(" ");
		for (int a = 1; a <= x - i; a++)	printf("*");
		printf("*");
		for (int a = 1; a <= x - i; a++)	printf("*");
		for (int a = 1; a <= i; a++)	printf(" ");
		printf("\n");
	}
	return 0;
}
