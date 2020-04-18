#include<iostream>
using namespace std;
class bintree
{
	bintree()
	{
		root=NULL;
	}
	struct node
	{
		int data;
		struct node *lchild,*rchild;
	}*root,*parent,*temp;
	public:
	void treeconstruct(int data);
	void preorder(struct node *root1);
	void inorder(struct node *root1);
	void postorder(struct node *root1);
};
void bintree::treeconstruct(int data)
{
	struct node *nN=new node;
	nN->data=data;
	nN->rchild=nN->lchild=NULL;
	if(root==NULL)
	{
		root=nN;
	}
	else
	{
		temp=root;
		while(temp!=NULL)
		{
			parent=temp;
			if((temp->data)>data)
			temp=temp->lchild;
			else
			temp=temp->rchild;
		}
		if((parent->data)>data)
		parent->lchild=nN;
		else
		parent->rchild=nN;
	}
}
void bintree::preorder()struct node *root1
{
	cout<<"tree in preorder traversal:";
	struct node *root1=root;
	if(root==NULL)
	return;
	else
	{
		cout<<root1->data<<"  ";
		preorder(root1->lchild);
		preorder(root1->rchild);
	}
}
void bintree::postorder(struct node *root1)
{
	cout<<"tree in postorder traversal:";
	struct node *root1=root;
	if(root==NULL)
	return;
	else
	{
		postorder(root1->lchild);
		postorder(root1->rchild);
		cout<<root1->data<<"  ";
	}
}
void bintree::inorder(struct node *root)
{
	cout<<"tree in inorder traversal:";
	struct node *root1=root;
	if(root==NULL)
	return;
	else
	{
		inorder(root1->lchild);
		cout<<root1->data<<"  ";
		inorder(root1->rchild);
	}
}
int main()
{
	bintree ob=new bintree();
	ob.treeconstruct(2);
	ob.treeconstruct(9);
	ob.treeconstruct(6);
	ob.treeconstruct(3);
	ob.treeconstruct(1);
	ob.treeconstruct(0);
	ob.preorder();
	ob.postorder();
	ob.inorder();
}
