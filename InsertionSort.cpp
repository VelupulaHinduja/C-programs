#include<iostream>
#include<stdlib.h>
using namespace std;
class insertionSort
{
	int size;
	public:
	insertionSort(int s)
	{
		size=s;
	}
	void insertSort(int num[]);
	void display(int num[]);
	void swap(int &x,int &y);
};
int main()
{
	
	int num[20],s,i,j;
	cout<<"Enter the size of array: ";
	cin>>s;
	if(s==0)
	{
		cout<<"As the size is 0 u can't enter the array elements"<<endl;
		exit(78);
	}
	cout<<"Enter "<<s<<" elements of array:";
	for(i=0;i<s;i++)
	cin>>num[i];
	insertionSort ob=insertionSort(s);
	ob.insertSort(num);
	cout<<"Sorted array is :";
	ob.display(num);
}
void insertionSort:: insertSort(int num[])
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j>0;j--)
		{
			if(num[j]<num[j-1])
			{
				swap(num[j],num[j-1]);
			}
		}
	}
}
void insertionSort:: display(int num[])
{
	for(int i=0;i<size;i++)
	{
		cout<<num[i]<<"  ";
	}
}
void insertionSort::swap(int &x,int &y)
{
	int t=x;
	x=y;
	y=t;
}
