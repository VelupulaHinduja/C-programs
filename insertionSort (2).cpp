#include<iostream>
#include<stdlib.h>
using namespace std;
class C
{
	int size,num[100];
	
	public:
	C(int s)
	{
	cout<<"enter elements";
	for( int i=0;i<s;i++)
	cin>>num[i];
	
		size=s;
	}
	void insertion();
	void display();
	void swap(int &x,int &y);
};
int main()
{
	int j,s;
	cout<<"enter the size of array";
	cin>>s;
	
	if(s==0)
	{
	cout<<"no space"<<endl;
	exit(10);
	}
	C ob=C(s);
	ob.display();
	ob.insertion();
	cout<<"sorted array is:"<<endl;
	ob.display();
}
void C::insertion()
{
	int i,j;
	for(i=0;i<size-1;i++)
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
void C::display()
{
	for(int i=0;i<size;i++)
	cout<<num[i]<<" ";
}
void C::swap(int &x,int &y)
{
	int t=x;
	x=y;
	y=t;
	cout<<"HELLO"<<x<<"  "<<y<<endl;
}
		
	
	
