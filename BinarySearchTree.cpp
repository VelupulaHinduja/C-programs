#include<iostream>
using namespace std;

class BinarySearchTree
{
		private:
			struct treeNode
			{
					int data;
					struct treeNode *left,*right;
			};

			treeNode *root;

		public:
			BinarySearchTree()
			{
					root = NULL;
			}

			void insertNode(int);
			void printInorder();
			void printPreorder();
			void printPostorder();
			void Inorder(treeNode*);
			void Preorder(treeNode*);
			void Postorder(treeNode*);
			void SearchElem(int);
			int isEmpty()
			{
					if(root==NULL)
					return(1);
					else
					return(0);
			}
};

void BinarySearchTree::printInorder()
{
		Inorder(root);
}

void BinarySearchTree::printPreorder()
{
		Preorder(root);
}

void BinarySearchTree::printPostorder()
{
		Postorder(root);
}


void BinarySearchTree::insertNode(int data)
{
		treeNode *nN = new treeNode;
		nN -> data = data;
		nN -> left = nN -> right = NULL;
		if(isEmpty())
		{
				root = nN;
		}
		else
		{
				treeNode *temp,*parent;
				parent = NULL;
				temp = root;


				//This is to findout the parents positon of new node insertion...........
				while(temp!=NULL)
				{
						parent = temp;
						if(nN -> data > temp -> data)
						{
							temp = temp -> right;
						}
						else
							temp = temp -> left;
				}

				//This is to place that node to the found out parent node........
				if(nN -> data < parent -> data)
				{
						parent -> left = nN;
				}
				else
				{
						parent -> right = nN;
				}
		}
}
void BinarySearchTree::SearchElem(int data)
{
		int present = 0;
		if(isEmpty())
		{
				cout << "\n\nThis is Empty Tree ............."<<endl;
				return;
		}

		else
		{
				treeNode *temp,*parent;
				temp = root;

				while(temp != NULL)
				{
						if(temp -> data == data)
						{
								present = 1;
								break;
						}

						else
						{
								parent = temp;

								if(data > temp -> data)
								{
									temp = temp -> right;
								}
								else
								{
									temp = temp -> left;
								}
						}
				}


				if(present)
				{
					cout << "The data u have entered is present "<<endl;
					cout << "The parent data of the element is : "<<parent -> data << endl;
						
				}
				else 
				{
					
					cout << "The Data u have entered is absent....";
				}
		}

}

void BinarySearchTree::Inorder(treeNode *temp)
{
		if(temp != NULL)
		{
				if(temp -> left)
					Inorder(temp -> left);

				cout << temp -> data;

				if(temp -> right)
					Inorder(temp -> right);
		}	
		else 
				return;
}

void BinarySearchTree::Preorder(treeNode *temp)
{
		if(temp != NULL)
		{
				cout << temp -> data;


				if(temp -> left)
					Preorder(temp -> left);


				if(temp -> right)
					Preorder(temp -> right);
		}	
		else 
				return;
}

void BinarySearchTree::Postorder(treeNode *temp)
{
		if(temp != NULL)
		{
				
				if(temp -> left)
					Postorder(temp -> left);


				if(temp -> right)
					Postorder(temp -> right);


				cout << temp -> data;



		}	
		else 
				return;
}


main()
{
		BinarySearchTree bst;
		int ch,data;


		while(1)
		{
				cout << "Binary Search Tree Operations :"<<endl;
				cout << "------------------------------"<<endl;
				cout << "1. Insert a node "<<endl;
				cout << "2. Print data of the tree in In-Order"<<endl;
				cout << "3. Print data of the tree in Pre-Order"<<endl;
				cout << "4. Print data of the tree in Post-Order"<<endl;
				cout << "5. Searching the element"<<endl;
				cout << "6. To Exit the programm"<<endl;
				cout << "========================================="<<endl;
				cout << "Enter your choice :";
				cin >> ch;

				switch(ch)
				{
						case 1:
							cout <<"Enter the data u want to insert :";
							cin >> data;
							bst.insertNode(data);
							cout <<endl;
							break;

						case 2:
							cout << "\n\nIn-Order traversal :"<<endl;
							cout << "==================="<<endl;
							bst.printInorder();
							cout <<endl;
							break;

						case 3:
							cout << "\n\nPre-Order traversal :"<<endl;
							cout << "===================="<<endl;
							bst.printPreorder();
							break;

						case 4:
							cout << "\n\nPost-Order traversal :"<<endl;
							cout << "====================="<<endl;
							bst.printPostorder();
							cout << endl;
							break;

						case 5:
							cout << "\nEnter the element to be searched : ";
							cin >> data;
							bst.SearchElem(data);
							cout <<endl;
							break;
						case 6:
							exit(0);
				}
		}

}
