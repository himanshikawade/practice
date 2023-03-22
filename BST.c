#include<stdio.h>
#include<stdlib.h>
struct node //struct declaration//
{
	int data;
	struct node *left;
	struct node *right;
};

struct node *create();//root address will return//
void insert(struct node*,struct node*);//first root data  will compare then the newnode value//
void preorder(struct node*);//only root address is required//
void inorder(struct node*);
void postorder(struct node*);

int main()
{
	char ch;
	struct node *root=NULL,*newnode;
	do                               //for one time //
	{
		newnode=create();        //address return of create//
		if(root==NULL)
		root =newnode;             //newnode will hold root value//
		else
		insert(root,newnode);
		printf(" do you want to enter more(y/n)?");
		getchar();
		scanf("%c",&ch);
	}
	while(ch=='y' | ch=='Y');
	printf("Preorder traversal:");
	preorder(root);
	printf("\nPostorder traversal:");
	postorder(root);
	printf("\nInorder traversal:");
	inorder(root);
	return(0);
}
struct node *create()
{
	struct node * newnode;
	int x;
	printf("enter the data:");
	scanf("%d",&x);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->left=newnode->right=NULL;
	return newnode;
}
void insert(struct node *root,struct node *newnode)
{
	if(newnode->data<root->data)
	{
		if(root->left!=NULL)
		insert(root->left,newnode);
		else
		root->left=newnode;
	}
	if(newnode->data>root->data)
	{
		if(root->right!=NULL)
		insert(root->right,newnode);
		else
		root->right=newnode;	
	}
}
void preorder(struct node *root)
{
	if(root!=NULL)
	{
		printf("%d\t",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void inorder(struct node *root)
{
	if(root!=NULL)
	{
	
		inorder(root->left);
		printf("%d\t",root->data);
		inorder(root->right);
	}
}
void postorder(struct node *root)
{
	if(root!=NULL)
	{
	
		postorder(root->left);
		postorder(root->right);
		printf("%d\t",root->data);
	}
}


