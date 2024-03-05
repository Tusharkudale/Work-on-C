#include<stdio.h>
#include<stdlib.h>
int BinarySearch(int a[0],int n,int key)
{
    int begin=0, end=n-1,mid;
    while(begin<=end)
    {
        mid=(begin+end)/2;
        if (key==a[mid])
        return mid;
        if (key<a[mid])
        end=mid-1;
        else
        begin=mid+1;

    }
    return -1;
}
void accept(int a[],int n)
{

    int i;
    printf("\nEnter the %d  elements in sorted order:",n);
   
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}
void main()
{
    int a[20],n,key,pos;
    printf("How many numbers:");
    scanf("%d",&n);
    accept(a,n);
    printf("\nEnter the key to be searched:");
    scanf("%d", &key);
    pos=BinarySearch(a,n,key);
    if(pos==-1)
    printf("\n Element not found in the array %d",key);
    else
    printf("\n Element found at position %d",key ,pos);
}