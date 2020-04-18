#include<iostream>
using namespace std;

int count=0;

void enQueue(int arr[],int size,int *rear,int* front)
{
	count++;
	if(count<=size)
	{
		int ele;
		cout << "Enter one element :";
		cin >> ele;
		if((*rear) == size-1)
		{
			cout << "Queue is full !";
			return;
		}
		else
		{
			(*rear)++;
			arr[(*rear)]=ele;
			return;
		}
	}
	else
	{
		cout<<"\n\nMemory Out of Bounds......\n\n";
	}
}

void deQueue(int arr[],int size,int* rear,int* front)
{
	int pos,i;
	cout <<"Enter the position where u want to delete :";
	cin >>pos;
	if(((*front)==(*rear))&&((*front)==-1))
	{
		cout << "This is Empty Queue ! and u cannot delete element.....\n";
		return ;
	}
	
	else if(pos > (*rear))
	{
		cout << "The element u want to delete is not possile due to less number of elements....\n";
		return ;
	}
	else
	{
		int temp = arr[pos];
		for(i =pos;i<(*rear);i++)
		{
			arr[i] = arr[i+1];
		}
		//delete arr[i];
		(*rear)--;
		cout<<"deleted element is :"<<temp;
		return;
	}
}

void printQueue(int arr[],int *rear)
{
	if((*rear) == -1)
	{
		cout << "The given Queue is empty !...\n";
		return;
	}
	else
	{
		for(int i=0;i<=(*rear);i++)
		{
			cout<<"The "<<i<<" Element is :"<<arr[i]<<endl;
		}
		return;
	}
}
main()
{
	int arr[10],size,front=-1,rear=-1,deleted;
	cout << "Enter the size of the array where size should be less than 10 ";
	cin >> size;
	
	while(1)
	{
		int choice;
		cout << "Enter Your choice: \n 1.Add Element in Queue. \n 2. Delete Element from queue\n 3.Print the Queue \n 4.Exit";
		cin >> choice;
		switch(choice)
		{
			case 1:enQueue(arr,size,&rear,&front);
				break;
			case 2:deQueue(arr,size,&rear,&front);
				//cout<<"Deleted element is : "<<deleted;
				break;
				//void print statement for array elements 
				// in case 2 - if conditions......
				//y delete asking pointer variable......?
			case 3:printQueue(arr,&rear);
				break;
			case 4:exit(0);
		}
	}
}
