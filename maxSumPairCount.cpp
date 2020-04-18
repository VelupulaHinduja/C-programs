#include<iostream>
using namespace std;
void sort(int arr[],int size);
void swap(int &x,int &y);
void display(int arr[],int size);
void maxSumPair(int arr[],int size);
int main()
{
	int arr[20],i,size;
	cout<<"Enter the size of an array u want to give: ";
	cin>>size;
	if(size==0)
	exit(4);
	cout<<"Enter the elements of array:";
	for(i=0;i<size;i++)
	cin>>arr[i];
	sort(arr,size);
	maxSumPair(arr,size);
}
void sort(int arr[],int size)
{
	for(int i=1;i<size;i++)
	{
		for(int j=i;j>0;j--)
		{
			if(arr[j]>arr[j-1])
			swap(arr[j],arr[j-1]);
		}
	}
	display(arr,size);
}
void swap(int &x,int &y)
{
	int t=x;
	x=y;
	y=t;
}
void display(int arr[],int size)
{
	cout<<"Sorted array is :";
	for(int i=0;i<size;i++)
	cout<<arr[i]<<"   ";
	cout<<endl;
}
void maxSumPair(int arr[],int size)
{
	int count=0;
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if((j==size)&&(i==(size-1))&&((i==size)&&(j==(size-1))))
			continue;
			if((arr[i]+arr[j])==(arr[0]+arr[1]))
			count++;
		}
	}
	cout<<"count of the maximum i.e. "<<arr[0]+arr[1]<<" sum pair is:  "<<count<<endl;	
}
