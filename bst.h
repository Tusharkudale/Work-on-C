#include<stdio.h>
#include<stdlib.h>
typedef struct BSTnode
{
    int data;
    struct BSTnode *left , *right;
}BSTnode;

BSTnode * Insert(BSTnode *root,int x)
{
	BSTnode *newnode;
	if(root==NULL)
	{
		newnode=(BSTnode *)malloc(sizeof(BSTnode));
		newnode->data=x;
		newnode->left=NULL;
		newnode->right=NULL;
		return(newnode);
	}
	if(x > root->data)
	{
		root->right=Insert(root->right,x);
		return(root);
	}
	else
		if(x < root->data)
		{
			root->left=Insert(root->left,x);
			return(root);
		}
		else
			return(root);
			
}
BSTnode *create()
{
    int n,x,i;
    BSTnode *root=NULL;
    
    printf("\nEnter no.of nodes:");
    scanf("%d",&n);
    printf("\nEnter tree values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        root=Insert(root,x);
    }
    return(root);

}
void inorder (BSTnode *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d\t",root->data);
		inorder(root->right);
	}
}
void preorder(BSTnode *root)
{
	if(root!=NULL)
	{
		printf("%d\t",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(BSTnode * root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d\t",root->data);
	}
}
