//3422
//LASTDIG
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t,a,b,ld;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&a,&b);
		if(b==0)
			ld=1;
		else if(a==0&&b!=0)
			ld=0;
		else if(a!=0&&b!=0)
		{
			b=b%4;
			if(b==0)
				b=4;
			ld=pow(a,b);
			ld=ld%10;
		}
		printf("%d\n",ld);
			
	}
	return 0;
}