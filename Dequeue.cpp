#include<iostream>
#include<stdlib.h>
using namespace std;
class deQueArr
{
	public:
		int arr[30],F,R,size;
		deQueArr()
		{
			F=R=-1;
			cout<<"Enter the size of the array:";
			cin>>size;
		}
		void insertLeft(int);
		void insertRight(int);
		void deleteLeft();
		void deleteRight();
		void display();
};
void deQueArr::insertLeft(int ele)
{
	if((F==-1)&&(R==-1))
	{
		F=R=0;
		arr[F]=ele;
	}
	else if(F==0)
	{
		cout<<"Insertion is not possible as F is at 0"<<endl;
		return;
	}	
	else 
	{
		F--;
		arr[F]=ele;
	}
}
void deQueArr::insertRight(int ele)
{
	if((F==-1)&&(R==-1))
	{
		F=R=0;
		arr[F]=ele;
	}
	else if(R==size-1)
	{
		cout<<"Insertion is not possible as R is at size-1"<<endl;
		return;
	}
	else
	{
		R++;
		arr[R]=ele;
	}
}
void deQueArr::deleteLeft()
{
	if((F==-1)&&(R==-1))
	{
		cout<<"No elements to delete "<<endl;
		return;
	}
	if(F==R)
	{
		F=R=-1;
		return;
	}
	else
	{
		F++;
	}
}
void deQueArr::deleteRight()
{
	if((F==-1)&&(R==-1))
	{
		cout<<"No elements to delete"<<endl;
		return;
	}
	else if(F==R)
	{
		F=R=-1;
		return;
	}
	else
	{
		R--;
	}
}
void deQueArr::display()
{
	if(F==-1&&R==-1)
	{
		cout<<"No elements to display "<<endl;
		return;
	}
	for(int i=F;i<=R;i++)
	{
		cout<<arr[i]<<"  ";
	}
}
int main()
{
	deQueArr ob;
	int choice,ele;
	while(1)
	{
		cout<<"---------------------------"<<endl;
		cout<<"1.Insert from left"<<endl;
		cout<<"2.Insert from right"<<endl;
		cout<<"3.Delete from left"<<endl;
		cout<<"4.Delete from right"<<endl;
		cout<<"5.Display"<<endl;
		cout<<"6.Terminate the program"<<endl;
		cout<<"---------------------------"<<endl;
		cout<<"Enter your choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter the element you want to insert from left:";
				cin>>ele;
				ob.insertLeft(ele);
				break;
			case 2:
				cout<<"Enter the element you want to insert from right:";
				cin>>ele;
				ob.insertRight(ele);
				break;
			case 3:
				ob.deleteLeft();
				break;
			case 4:
				ob.deleteRight();
				break;
			case 5:
				ob.display();
				break;
			default:
				exit(143);
		}
	}
}
