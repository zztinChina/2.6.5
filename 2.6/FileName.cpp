#include<stdio.h>
int main()
{   
	int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d%d%d", &a, &b, &c);
	int tem = 0;
	if (a> b)
	{
		tem = a;
		a = b;
		b = tem;
	}
	if (c > b)
	{
		printf("%d%d%d", a, b, c);
	}
	else if(c > a)
	{
		tem = c;
		b= c;
		b = tem;
		printf("%d%d%d", a, b, c);
	}
	else if (c < a)
	{
		tem = c;
		c = a;
		a=tem;
		printf("%d%d%d", a, b, c);

	}
	return 0;
}