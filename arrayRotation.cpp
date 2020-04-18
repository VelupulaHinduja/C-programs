#include<iostream>
using namespace std;
int main()
{
	int size=8,arr[20]={0,1,2,3,4,5,6,7},i,val;
	cout<<"Enter the place u want to rotate from ";
	cin>>val;
	for(i=val+1;i<size;i++)
	{
		if(i==size-1)
		{	
			cout<<arr[i]<<" ";
			i=0;
		}
		if(i==val)
		{
			//cout<<arr[i];
			break;
		}
		cout<<arr[i]<<" ";
	}
}
