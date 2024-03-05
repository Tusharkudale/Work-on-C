#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int info;
    struct node *next;
}NODE;

void CreateList(NODE *head)
{
    int count, n;
    NODE *newnode,*last;
    printf("\n Enter the number of nodes:");
    scanf("%d",&n);
    last=head;
    for(count=1;count<=n;count++)
    {
        newnode=(NODE*)malloc(sizeof(NODE));
        newnode->next=NULL;
        printf("\n Enter the data:");
        scanf("%d",&newnode->info);
        last->next=newnode;
        last=newnode;
    }
}
void DisplayList(NODE *head)
{
    NODE *temp;
    for(temp=head->next;temp!=NULL;temp=temp->next)
    {
    printf("|%d|->",temp->info);
    }
    printf("NULL");
}


void SortListWithBubble(NODE *head)
    {
        NODE *temp,*temp1;
        int num;
        for(temp=head->next;temp->next!=NULL;temp=temp->next)
        for(temp1=temp->next;temp1!=NULL;temp1=temp1->next)
        if(temp->info>temp1->info)
        {
            num=temp->info;
            temp->info=temp1->info;
            temp1->info=num;
        }
    }

 
int main()
{
    NODE *head;
    int choice,n,pos;
    head=(NODE*)malloc(sizeof(NODE));
    head->next=NULL;
   
    do
    {
        printf("\n1:CREATE");
        printf("\n2:DISPLAY");
        printf("\n3:SORTLISTWITHBUBBLE");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            CreateList(head);
            break;
            case 2:
            DisplayList(head);
            break;
            case 3:
            SortListWithBubble(head);DisplayList(head);
            break;
            
        }
    }while(choice!=4);
}