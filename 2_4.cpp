//Problem:the sun of subsequence

#include <stdio.h>

int main()
{	
	int n, m,kase=0;
	double sum=0;
	while (scanf_s("%d%d", &n, &m) != EOF) {
		if (n == 0 && m == 0)	break;
		for (long long i = n; i <= m; i++)    //prevent	overflow		
			sum += 1.0 / (long long)(i*i);    //1.0 
		printf("Case %d: %.5f\n", ++kase, sum);
		sum = 0;    //refresh sum
	}
	return 0;
}
