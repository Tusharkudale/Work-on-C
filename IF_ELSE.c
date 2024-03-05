#include<stdio.h>
int main()
{
int x=0;
printf("\nEnter number:");
scanf("%d",&x);
if(x>9 && x<100)
{
printf("\nTRUE");
}
else
{
printf("\nFALSE");
}
return 0;
}