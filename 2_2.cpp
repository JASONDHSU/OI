//Problem: Han Xin selects the soldier
/*****************************************
**描述 
相传韩信才智过人，从不直接清点自己军队的人数，只要让士兵先后以三人一排、五人一排、七人一排地变换队形，而他每次只掠一眼队伍的排尾就知道总人数了。
输入3个非负整数a,b,c ，表示每种队形排尾的人数（a<3,b<5,c<7），输出总人数的最小值（或报告无解）。已知总人数不小于10，不超过100 。 
**输入 
输入3个非负整数a,b,c ，表示每种队形排尾的人数（a<3,b<5,c<7）。例如,输入：2 4 5 
**输出 
输出总人数的最小值（或报告无解，即输出No answer）。实例，输出：89
*****************************************/
#include <stdio.h>

int main()
{	
	int a, b, c,kase=0;
	while (scanf_s("%d%d%d", &a, &b, &c) != EOF) {		//EOF=-1
		for (int x = 10; x <= 100; x++)
		{
			if (x % 3 == a && x % 5 == b &&x % 7 == c)
				printf("Case %d: %d\n", ++kase, x);
		}
		if (kase > 0) {
			kase = 0; continue;				//refresh kase
		}
		else   printf("No answer");			//skip
	}
	return 0;
}

