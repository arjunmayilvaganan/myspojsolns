//7974
//ACPC10A
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	while(1)
	{
		cin>>a>>b>>c;
		if(a==0&&b==0&&c==0)
			break;
		if((c-b==b-a)&&(b-a)!=0)
			cout<<"AP "<<(c+(b-a))<<endl;
		else
			cout<<"GP "<<(c*(b/a))<<endl;
	}
	return 0;
}