#include<stdio.h>
int rev(int n)
{
	int m;
	for(m=0;n!=0;n/=10)
	{
		m*=10;
		m=m+(n%10);
	}
	return m;
}
int main()
{
	int n,a,b,c;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&a);
		a=rev(a);
		scanf("%d",&b);
		b=rev(b);
		c=a+b;
		c=rev(c);
		printf("%d\n",c);
	}
	return 0;
}
