#include<iostream>
#include<stdlib.h>
using namespace std;
void insertAtBeg(struct node **head,int ele);
void display(struct node *);
struct node
{
	int data;
	struct node *link;
};
void insertAtBeg(struct node **head,int ele)
{
	struct node *nN=new node;
	nN->data=ele;
	nN->link=NULL;
	if((*head)==NULL)
	{
		(*head)=nN;
	}
	else
	{
		nN->link=(*head);
		(*head)=nN;
	}
}
int main()
{
	int ele;
	struct node *head=new node;
	head=NULL;
	while(1)
	{	
		switch(ch)
		{
		        case 1:
				cout<<"Enter element to insert at beg";
				cin>>ele;
				insertAtBeg(&head,ele);
				break;
			
		if(ele==0)
		break;
		}
	}
	display(head);
}
void display(struct node *head)
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->link;
	}
}


