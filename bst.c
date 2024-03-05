#include<stdio.h>
#include<stdlib.h>
typedef struct BSTnode
{
    int data;
    struct BSTnode *left,*right;
}NODE;

BSTnode *create()
(
    int n,x,i;
    BSTnode *root;
    root=NULL;
    printf("\nEnter no.of nodes:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        root = insert(root,x);
    }
    return(root);
)