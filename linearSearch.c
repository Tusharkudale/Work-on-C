#include<stdio.h>
int linearSearch(int a[10], int n,int key)
{
int i;
for(i=0;i<n;i++)
if(a[i]==key)
return i;
return -1;
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
pos=linearSearch(a,n,key);
if(pos==-1)
printf("\n Element not found");
else 
printf("\n Element found at position:%d" ,pos);
}


/*
How many elements:11

Enter the element:3

Enter the element:4

Enter the element:6

Enter the element:8

Enter the element:1

Enter the element:7

Enter the element:9

Enter the element:11

Enter the element:0

Enter the element:2

Enter the element:12

Enter the key to be search:12

 Element found at position:10 */