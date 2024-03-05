#include<stdio.h>
#include"bst.h"
void main()
{
    BSTnode *root=NULL ;
    int x,op;
    do
    {
        printf("\n\n1create\n2insert\n3inorder\n4preorder\n5postorder\n6quit");
        printf("\nEnter your choice:");
        scanf("%d",&op);
        switch(op)
        {
            case 1:root=create();
            break;
            case 2:printf("enter the key to be inserted:");
            scanf("%d",&x);
            root=Insert(root,x);
            break;
            case 3:inorder(root);
            break;
            case 4:preorder(root);
            break;
            case 5:postorder(root);
            break;
        }
    }while(op!=6);
}