#include<stdio.h>

countways(int n)
{
	if(n<=2)
	{
		return n;
	}
	return countways(n - 1) + countways(n - 2);
}
int main()
{
	int x;
	scanf("%d",&x);
	int ways = countways(x);
	printf("%d",ways);
	return 0;
}
