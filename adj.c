#include<stdio.h>
void create(int a[10][10],int n)
{
    printf("\ntype 1 for YES  & type 0 for NO");
    for(int i=0;i<n;i++) 
    {
        for(int j=0;j<n;j++)
        {
            a[i][j]=0;
            if(i!=j)
            {
                printf("\nIs there any edge between%d & %d",i+1,j+1);
                scanf("%d",&a[i][j]);
            }
        }
    }
}
void  display(int a[10][10],int n)
{
    printf("\nMatrix is:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }

    }
}
        int main()
        {
            int a[10][10],n;
            printf("Enter the number of vertices:");
            scanf("%d", &n);
            create(a,n);
            display(a,n);
        }
    
