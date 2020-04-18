#include<iostream>
using namespace std;
//class head
void heapConstruction(int arr[],int size)
{
	for(int i=2;i<size;i++)
	{	
		int j=i;
		while(j>1)
		{
			if(arr[j/2]<arr[j])
			{
				swap(arr[j],arr[j/2]);
			}
			j=j/2;
		}
	}	
}
void swap(int& x,int& y)
{
	int temp=x;
	x=y;
	y=temp;
}
void display(int num[],int size)
{	
	for(int i=1;i<size;i++)
	cout<<"   "<<num[i];
	
}
void heapSort(int arr[],int size)
{
	int i,temp;
	for(i=size-1;i>=1;i--)
	{
		temp=arr[i];
		arr[i]=arr[1];
		arr[1]=temp;
		//cout<<arr[i]<<"  ";
		arr[0]--;
		heapConstruction(arr,i);
	}
}
int main()
{
	int arr[100],i,j,size;
	cout<<"Enter size of array ";
	cin>>size;
	arr[0]=size-1;
	cout<<"Enter "<<size-1<<"elements";
	for(i=1;i<size;i++)
	{
		cin>>arr[i];
	}
	heapConstruction(arr,size);
	display(arr,size);
	cout<<"\n Display after sort:";
	heapSort(arr,size);
	display(arr,size);
	cout<<"Size of the array is :"<<arr[0];
}
