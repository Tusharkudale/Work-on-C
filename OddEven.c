#include<stdio.h>

int main()
{
int num;
printf("\nEnter the number:");
scanf("%d",&num);

if (num %2==0)
printf("%d number is even",num);
else
printf("%d number is odd",num);

return 0;

}