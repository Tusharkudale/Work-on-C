#include<stdio.h>
int main ()
{
int num1,num2,subtraction;

printf("\nEnter the numbers:");
scanf("%d%d" ,&num1, &num2);

subtraction=num1-num2;

printf("subtraction of %d and %d =%d",num1,num2,subtraction);
return 0;
}

/*
OUTPUT:
Enter the numbers:8 7
subtraction of 8 and 7 =1
C:\Users\USER\Desktop\c programs>a

Enter the numbers:7 8
subtraction of 7 and 8 =-1 */
