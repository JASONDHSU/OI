//Problem:permutation,abc:def:ghi=1:2:3,no repeatation

#include <stdio.h>

int main()
{
	int a[10];
	for (int i = 123; i <= 329; i++) {    //987/3=329
		int j = 0, sum = 0;
		for (int m = 0; m < 10; m++) {
			a[m] = 0;
		}
		int x = i;
		int y = 2 * i;
		int z = 3 * i;
		a[x / 100] = a[x / 10 % 10] = a[x % 10] = 1;
		a[y / 100] = a[y / 10 % 10] = a[y % 10] = 1;
		a[z / 100] = a[z / 10 % 10] = a[z % 10] = 1;
		for (j = 0; j < 10; j++)
			sum += a[j];          //sum
		if (sum == 9)
			printf("%d %d %d\n", x, y, z);
	}
	return 0;
}
