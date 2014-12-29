//400
//TOANDFRO
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string message;
	char msg[200][20];
	int column,row,i,j,k;
	while(1)
	{
		cin>>column;
		if(!column)
			break;
		cin>>message;
		row=message.length()/column;   
		for(j=0,i=0;j<row;j++)
		{
			if(j%2==0)
				for(k=0;k<column;k++,i++)
					msg[j][k]=message[i];
			else
				for(k=column-1;k>-1;k--,i++)
					msg[j][k]=message[i];
					
		}
		for(k=0;k<column;k++)
			for(j=0;j<row;j++)
				cout<<msg[j][k];
		cout<<endl;
	}
	return 0;
}