//11
//FCTRL
#include<iostream>
using namespace std;
int main()
{
	int t,n,five,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=5,five=0;i<=n;i*=5)
		{
			five+=n/i;
		}
			printf("%d\n",five);
	}
	return 0;
}