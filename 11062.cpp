//BSEARCH1
//11062
#include<iostream>
using namespace std;
int bsearch(int arr[],int min,int max,int key)
{
	if(!(min>max))
	{
		int mid=(min+max)/2;
		if(arr[mid]==key)
		{
			while(arr[mid-1]==key)
				mid--;
			return mid;
		}
		if(arr[mid]>key)
			return bsearch(arr,min,mid-1,key);
		else if(arr[mid]<key)
			return bsearch(arr,mid+1,max,key);
	}
	return -1;
}
int main()
{
	int size,*arr,i,x,pos,n;
	scanf("%d%d",&size,&n);
	arr=new int[size];
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	//scanf and printf used thro out to avoid TLE. cin,cout use hell lotta time.
	while(n>0)
	{
		scanf("%d",&x);
		pos=bsearch(arr,0,size-1,x);
		if(pos!=-1)
			printf("%d\n",pos);
		else
			printf("-1\n");
		n--;
	}
	return 0;
}