//Problem:decimal

#include <stdio.h>

int main()
{	
	int a, b, c,kase=0;
	while (scanf_s("%d%d%d", &a, &b, &c) != EOF) {
		if (a == 0 && b == 0 && c == 0)	break;
		printf("Case %d:%.*f\n",kase, c, (double)a / b);    //.*f,c
	}
	return 0;
}
