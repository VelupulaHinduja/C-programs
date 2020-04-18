#include<iostream>
#include<string.h>
using namespace std;
#define MAX 20
class A
{
	char stack[MAX];
	int top;
	public:
	A()
	{
		top=-1;
	}
	char pop();
	void push(char);
	int prece(char);
	int isoperator(char);
	void convertip(char infix[], char postfix[]);
};
int A:: prece(char symbol)
{
	switch(symbol)
	{
		case'+':
		case'-':return 2;
		break;
		case'*':
		case'%':
		case'/':return 4;
		break;
		case'^':return 6;
		break;
		case'(':
		case')':return 1;
		break;
		case'#':return 0;
		break;
	}
}
int A::isoperator(char symbol)
{
	switch(symbol)
	{
		case'+':
		case'-':
		case'*':
		case'/':
		case'%':
		case'^':
		case'(':
		case')':return 1;
		break;
		default:return 0;
	}
}
void A::convertip(char infix[], char postfix[])
{
	int j=0;
	char symbol;
	stack[++top]='#';
	for(int i=0;i<strlen(infix);i++)
	{
		symbol=infix[i];
		if(isoperator(symbol==0))
		{
			postfix[j]=symbol;
			j++;
		}
		else
		{
			if(symbol=='(' )
			push(symbol);
			else if(symbol==')' )
			{
				while(stack[top]!='(' )
				{
					postfix[j]=pop();
					j++;
				}
				pop();
			}
			else
			{
				if(prece(symbol)>prece(stack[top]))
				{
					push(symbol);
				}
				else
				{
					while(prece(symbol)<=prece(stack[top]))
					{
						postfix[j]=pop();
						j++;
					}
					push(symbol);
				}
			}
		}
	}

while(stack[top]!='#')
{
	postfix[j]=pop();
	j++;
}
postfix[j]='\0';
}
main()
{
	char infix[MAX],postfix[MAX];
	A ob;
	cout<<"enter infix expression"<<endl;
	cin>>infix;
	ob.convertip(infix,postfix);
	cout<<" the postfix string is"<<endl;
	cout<<postfix<<endl;
}
 void A:: push(char item)
{
	top++;
	stack[top]=item;
}
char A:: pop()
{
	char a;
	a=stack[top];



top--;
return a;
}
