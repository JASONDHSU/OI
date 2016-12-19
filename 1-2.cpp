//圆柱体表面积

#include <stdio.h>
#include <math.h>
int main(){
	const double pi = acos(-1.0);
	double r,h,s1,s2,s;
	scanf("%lf%lf",&r,&h);
	s1 = pi*r*r;
	s2 = 2*pi*r*h;
	s=s1*2.0+s2;
	printf("Area = %.3f\n",s);
	return 0;
}

//三位数反转

#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	printf("%d%d%d",n%10,n/10%10,n/100);
	return 0;
}

//三位数反转（避开25写成025的情况）

#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	printf("%d%d%d",n%10,n/10%10,n/100);
	return 0;
}

//两数交换（三变量法）

#include <stdio.h>
int main(){
	int a,b,t;
	scanf("%d%d",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("%d %d\n",a,b);
	return 0;
}

//两数交换（手工理解）

#include <stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d %d\n",a,b);
	return 0;
}
//分析：少一个变量，需手工分析,不推荐使用

//两数交换（黑盒思想）

#include <stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d %d\n",b,a);
	return 0;
}
//分析：我们的目标是
//解决问题
//Keep It Simple and Stupid,KISS

//鸡兔同笼

//鸡兔总数n,总腿数m,鸡数a,兔数b
//输入n,m
//输出a,b
#include <stdio.h>
int main(){
	int a,b,n,m;
	scanf("%d%d",&n,&m);
	a = (4*n - m)/2;
	b=n-a;
	if(m%2==1 || a<0 || b<0)
		printf("No Answer\n");
	else
		printf("%d %d\n",a,b);
	return 0;
}
//a+b=n		2a+4b=m

//三数平均值（保留三位小数）

#include <stdio.h>
#include <math.h>
int main(){
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	printf("The average number = %.3f\n",(a+b+c)/3);
	return 0;
}

//正弦余弦

#include <stdio.h>
#include <math.h>
int main(){
	int x;
	double a;
	const double pi = acos(-1.0);
	scanf("%d",&x);
	if(x<0 || x>360)
		printf("No answer");
	else{
		a=(double)(x*2*pi/360);
		printf("%.3f\n",sin(a));
		printf("%.3f\n",cos(a));
	}
	return 0;
}

//判断三角形

#include <stdio.h>
#include <math.h>
int main(){
	unsigned int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a*a == ( b*b + c*c ) ||
	   b*b == ( a*a + c*c ) ||
	   c*c == ( a*a + b*b ) )
		printf("yes");
	else if(a + b < c || 
			b + c < a ||
			a + c < b)
		printf("Not a triangle");
	else{
		printf("No");
	}
	return 0;
}

//测试double能表示的范围

#include <stdio.h>
int main(){
	printf("%.50f",1.0/3.0);
	return 0;
}

//7744完全平方数

#include <stdio.h>
#include <math.h>
int main(){
	for(int a = 1;a <= 9; a++)
		for(int b = 0 ;b <=9 ;b++)
		{
			int n = a*1100 + b*11;
			int m = floor(sqrt(n) + 0.5);
			if(m*m == n) 
				printf("%d\n",n);
		}
	return 0;
}
//floor:不超过一个数的最大值
//避免误差：单位区间左移0.5

//7744完全平方数（枚举平方根，避开开方）

#include <stdio.h>
int main(){
	for(int x = 1; ; x++)
	{
		int n = x*x;
		if(n<1000)	continue;
		if(n>9999)	break;
		int hi = n/100;
		int lo = n%100;
		if(hi/10 == hi%10 && lo/10 ==lo%10)	printf("%d\n",n);
	}
	return 0;
}
//continue:进行下次循环
//break:结束总循环
//for循环可残缺	for（ ； ； ）是一个死循环

//3n+1问题（乘法溢出）

#include <stdio.h>
int main(){
	int n2,count=0;
	scanf("%d",&n2);
	long long n = n2;
	while(n >1){
		if(n%2 == 1)	n=n*3+1;
		else n/=2;
		count++;
	}
	printf("%d\n",count);
	return 0;
}
//本题中n的范围在10的9次方，只比int的32位范围大了一些
//乘法溢出
//用long long 解决问题

//近似计算

#include <stdio.h>
int main(){
	double sum = 0;
	for(int i = 0; ;i++){
		double term = 1.0/(2*i+1);
		if(i%2 == 0)
			sum += term;
		else sum-= term;
		if(term < 1e-6)
			break;
	}
	printf("%f\n",sum);
	return 0;
}
//do-while循环

//阶乘之和

#include <stdio.h>
int main() {
	int n, S = 0;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		int factorial = 1;
		for (int j = 1; j <= i; j++)
			factorial *= j;
		printf("%d\n", factorial);
		S += factorial;
	}
	printf("%d\n", S % 1000000);
	while (1);
	return 0;
}
//10行printf"输出中间变量"法验证乘法出现溢出

//阶乘之和（取模在10的6次方内）

#include <stdio.h>
int main() {
	const int Mode = 1000000;
	int n, S = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		int factorial = 1;
		for (int j = 1; j <= i; j++)
			factorial = (factorial * j % Mode);
		S = (S + factorial)% Mode;
	}
	printf("%d\n",S);
	printf("Time used = %.2f\n", (double)clock()/CLOCKS_PER_SEC);//实用：计时函数clock()      echo n|a
	return 0;
}

//数据统计

//输出最小值，最大值，平均值
#include <stdio.h>
int main() {
	int x,n = 0,min ,max,s = 0;
	scanf("%d",&x);
	min = max = x;
	while(scanf("%d",&x) == 1)
	{
		s+=x;
		if(x < min)	min = x;
		if(x > max)	max = x;
		//printf("%d\n",max);
		n++;
	}
	printf("%d %d %.3f\n",min,max,(double)s/n);
	return 0;
}
//windows下，输入完毕后先按Enter键，再按Ctrl+Z,再按Enter即可结束

//输入输出重定向

//输出最小值，最大值，平均值
#define LOCAL

#include <stdio.h>
#define INF 1000000000
int main() {
	
	#ifdef LOCAL
	freopen("data.in","r",stdin);
	freopen("data.out","w",stdout);
	#endif
	
	int x,n = 0,min = INF ,max = -INF,s = 0;
	while(scanf("%d",&x) == 1)
	{
		s+=x;
		if(x < min)	min = x;
		if(x > max)	max = x;
		//printf("x= %d,min= %d,max =%d\n",x,min,max);
		n++;
	}
	printf("%d %d %.3f\n",min,max,(double)s/n);
	return 0;
}
//重定向的部分写在了#ifdef和#endif中：只有定义了符号LOCAL才编译freopen语句
//输出中间结果的printf语句写在了注释中，在最终版本本不应该出现，又舍不得删除它
//万一有了新的bug需要用它输出新的中间信息

//数据统计（多组数据）

//输出最小值，最大值，平均值
#define LOCAL
#include <stdio.h>
#define INF 1000000000
int main() {
	
	#ifdef LOCAL
	freopen("data.in","r",stdin);
	freopen("data.out","w",stdout);
	#endif
	
	int x,n = 0,s = 0,kase = 0;
	while(scanf("%d",&n) == 1 && n)		//n是输入的数据的个数，当n=0时就退出了
	{
		int s = 0;
		int min = INF ,max = -INF;		//把min和max定义在循环体内部，避免上一组数据计算完后没有重置影响下一组数据的求解
		for(int i = 0; i < n; i++){
			scanf("%d",&x);
			s += x;
			if(x < min)	min = x;
			if(x > max)	max = x;
		}
		if(kase) printf("\n");
		printf("Case %d: %d %d %.3f\n",++kase,min,max,(double)s/n);
	}
	return 0;
}
//判断scanf的返回值是为了鲁棒性
//当嵌套的两个代码块中有同名变量时，内层屏蔽外层，有可能造成隐蔽的错误
//用gcc -Wall 可以给出很多警告错误，但不能解决所有的问题

//水仙花数

#include <stdio.h>
int main() {
	for(int i = 100; i < 1000; i++)
	{
		int a = i / 100;
		int b = i % 100 / 10;
		int c = i - a*100 - b*10;
		if(i == a*a*a + b*b*b +c*c*c)		//= =
			printf("%d\n",i);
	}
	return 0;
}

//倒三角形

#include <stdio.h>
int main() {
	
	int n;
	scanf("%d",&n);
	
	for(int i = 1;i <= n; i++)
	{
		for(int j = 1 ;j < i; j++)
		{
			printf(" ");
		}
		for(int k = n-i; k > 0; k--)
		{
			printf("*");
		}
		printf("*");
		for(int k = n-i; k > 0; k--)
		{
			printf("*");
		}
		for(int j = 1 ;j < i; j++)
		{
			printf(" ");
		}
		printf("\n");
	}
	
	return 0;
}
//双for循环？控制行列
//先打印*还是 ？每行打印几个？
//对称的怎么放在for循环里实现？

//子序列的和

#define LOCAL
#include <stdio.h>
int main(){
	
	#ifdef LOCAL
	freopen("data.in","r",stdin);
	freopen("data.out","w",stdout);
	#endif
	
	int n,m,kase=1;
	while(scanf("%d%d",&n,&m) == 2)		//scanf("%d%d", &a, &b) == 2
	{
		if(!n && !m)
			break;
		double sum = 0;		//循环中的变量需要每次刷新防止残留影响
		for(int i = n; i <= m; i++)
			sum += 1.0/i/i;			//有一个浮点数就可以转换为浮点数		
		printf("Case %d: %.5f\n\n",kase++,sum);
	}	
	
	return 0;
}
/*
scanf("%d%d", &a, &b);
如果a和b都被成功读入，那么scanf的返回值就是2
如果只有a被成功读入，返回值为1
如果a和b都未被成功读入，返回值为0
如果遇到错误或遇到end of file，返回值为EOF。
*/

//分数化小数

#define LOCAL
#include <stdio.h>
int main(){
	
	#ifdef LOCAL
	freopen("data.in","r",stdin);
	freopen("data.out","w",stdout);
	#endif 
	
	int a,b,c,kase = 1;
	while(~scanf("%d%d%d",&a,&b,&c)){		//~scanf
		if(!a && !b && !c)
			break;
		double avr = a/(b*1.0);		//乘1.0转换为浮点数
		printf("Case %d: %.*f",kase++,c,avr);		//输出小数点位数为变量
		}
	return 0;
}
/*
printf("%*.*f", 10, 4, 123.3);
表示输出的总宽度是10，小数位数是4
*/s

//排列

#include <stdio.h>
int main(){
	int a[10];
	for(int x = 123;x < 329; x++)		//z最大987，除以3就是329
	{
		int y = 2*x;
		int z = 3*x;
		a[x/100] = a[x/10%10] = a[x%10] = 1;		//所有x,y,z的9个数都以1/0作为是否出现的判断依据
		a[y/100] = a[y/10%10] = a[y%10] = 1;
		a[z/100] = a[z/10%10] = a[z%10] = 1;
		
		int sum = 0;
		for(int i = 1; i < 10; i++){
			sum += a[i];
			a[i] = 0;			//若不清零，则1传递到下一循环中去造成影响
		}
		
		if(sum == 9 )			//若都不重复，则打印
			printf("%d %d %d\n",x,y,z);
	}
	return 0;
}
