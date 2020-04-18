#include<iostream>
using namespace std;
int isPrime(int num);
int main()
{	
	int count=0,digit,val=0,res,i,num,num1,j;
	cout<<"Enter two numbers to define a range";
	cin>>num;
	cin>>num1;
	for(j=num;j<num1;j++)
	{	
		val=0;
		i=j;
		while(i>0)
		{
			digit=i%10;
			val=digit+val;
			i=i/10;
		}
		res=isPrime(val);
		if(res==1)
		count++;
	}
	cout<<count;
}
int isPrime(int num)
{
	int i=2;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			return(0);
		}
	}
	if(i==num)
	{
		return(1);
	}
}

