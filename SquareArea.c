#include<stdio.h>
int main()
{
 int side;

printf("enter the value of side:");
scanf("%d", &side);

printf("Area of square:%d", side*side);
return 0;
}

/*
C:\Users\USER\Desktop\c programs>gcc SquareArea.c

C:\Users\USER\Desktop\c programs>a
enter the value of side:5
Area of square:25
*/