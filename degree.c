#include<stdio.h>
void main()
{
    int a[10][10],i,j,n,out=0,in=0,sum=0;
    printf("\nEnter the how many vertex:");
    scanf("%d",&n);
    printf("\ntype 1 for YES  & type 0 for NO\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=0;
            if(i!=j)
            {
                printf("Is there edge between %d & %d",i+1,j+i);
                scanf("%d",&a[i][j]);
            }
        }
    }

        printf("\nvertex indgree outdegree total");
        for(i=0;i<n;i++)
{
    in=out=0;
    for(j=0;j<n;j++)

    in=in+a[j][i];
    out=out+a[i][j];
    sum=in+out;

    printf("%3d %4d %10d %6d",i+1,in,out,sum);
    printf("\n");
}
}