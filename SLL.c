#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int info;
    struct node *next;
}NODE;

void CreateList(NODE *head)
{
    int count=0, n=0;
    NODE *newnode,*last;
    printf("\nEnter the number of node:");
    scanf("%d", &n);
    last=head;
    for(count=1;count<=n;count++)
    {
    newnode=(NODE*)malloc(sizeof(NODE));
    newnode->next=NULL;
    printf("\nEnter the data:");
    scanf("%d", &newnode->info);
    last->next=newnode;
    last=newnode;
    }
}
void DisplayList(NODE *head)
{
    NODE *temp;
    for (temp=head->next;temp!=NULL;temp=temp->next)
    {
        printf("|%d|->",temp->info);
    }
    printf("NULL");
}
int main ()
{
NODE *head;
head=(NODE*)malloc(sizeof(NODE));
 head->next=NULL;
CreateList(head);
DisplayList(head);
}
