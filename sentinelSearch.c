#include<stdio.h>
int sentinelSearch(int a[10],int n,int key)
{
int i=0;
int compcount=0;
a[n]=key;
while(a[i]!=key)
{
compcount++;
i++;
}
compcount ++;
if (i==n)
return -1;
else 
return i;
}
void main()
{
int a[10],n,i,key,pos;
printf("\nHow many elements:");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("\nEnter the element:");
scanf("%d", &a[i]);
}
printf("\nEnter the key to be search:");
scanf("%d", &key);
pos=sentinelSearch(a,n,key);
if(pos==-1)
printf("\n Element not found");
else 
printf("\n Element found at position:%d" ,pos);
}


/*

How many elements:7

Enter the element:2

Enter the element:3

Enter the element:4

Enter the element:5

Enter the element:6

Enter the element:7

Enter the element:8

Enter the key to be search:7

 Element found at position:5
*/