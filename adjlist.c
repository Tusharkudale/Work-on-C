#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int vertex;
    struct node *next;
}NODE;
NODE *list[10];
int create(int a[10][10],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j]=0;
            if(i!=j)
            {
                printf("\nIs there edge between %d and %d:",i+1,j+1);
                scanf("%d",&a[i][j]);
            }
        }
    }
}
void clist (int a[10][10],int n)
{
    NODE *temp,*newnode;
    for(int i=0;i<n;i++)
    {
        list[i]==NULL;
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==1)
            {
            newnode=(NODE*)malloc(sizeof(NODE));
            newnode->vertex=j+1;
            newnode->next=NULL;
            
                if(list[i]==NULL)
                list[i]=temp=newnode;
                else
                temp->next=newnode;
                temp=newnode;
            }
        }
    }
}
void dlist(int n)
{
    NODE *temp;
    printf("\nthe adj list is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d->",i+1);
        temp=list[i];
        while(temp)
        {
            printf("v%d",temp->vertex);
            temp=temp->next;
        }
        printf("NULL");
    }
}
int main()
{
    int a[10][10], n;
    printf("\nEnter the no of vetex:");
    scanf("%d",&n);
    create(a,n);
    clist(a,n);
    dlist(n);
}