#include<stdio.h>
#include"ts.h"
void main ()
{
    BSTnode *root=NULL ,*p;
    int x,op;
    do
    {
        printf("\n\n1create\n2insert\n3inorder\n4preorder\n5postorder\n6search\n7quit");
        printf("\nEnter your choice:");
        scanf("%d",&op);
        switch(op)
        {
            case 1 :root = create();
            break;
            case 2 :printf("\nenter the key to be inserted:");
            scanf("%d",&x);
            root=Insert(root,x);
            break;
            case 3:inorder(root);
            break;
            case 4:preorder(root);
            break;
            case 5:postorder(root);
            break;
            case 6:printf("\nenter the key to be search:");
            scanf("%d",&x);
            p=search(root,x);
            if(p==NULL)
            printf("NOT FOUND\n");
            else
            printf("\nFOUND");
            break;
        }
    }while(op!=7);
}