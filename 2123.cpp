//2123
//CANDY
#include<iostream>
using namespace std;
int main()
{
	int n,sum,avg,moves,i,h,l,*ns;
	while(1)
	{
		cin>>n;
		if(n==-1)
			break;
		ns=new int[n];
		for(i=0,sum=0;i<n;i++)
		{
			cin>>ns[i];
			sum=sum+ns[i];
			
		}
		avg=sum/n;
		for(i=0,h=0,l=0;i<n;i++)
		{
			if(ns[i]>avg)
				h=h+(ns[i]-avg);
			else if(ns[i]<avg)
				l=l+(avg-ns[i]);
		}
		if(l==h)
		{
			for(i=0,moves=0;i<n;i++)
				if(ns[i]>avg)
					moves=moves+(ns[i]-avg);
			cout<<moves<<endl;
		}
		else
			cout<<"-1"<<endl;
		delete[] ns;
	}
	return 0;
}