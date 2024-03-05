#include<stdio.h>
int main()
{
 float length, breadth;

printf("Enter length of rectangle:");
scanf("%f", &length);

printf("Enter breadth of rectangle:");
scanf("%f", &breadth);

printf("area of rectangle:%f", length*breadth);
return 0;

}

/*
C:\Users\USER\Desktop\c programs>gcc rectangleArea.c

C:\Users\USER\Desktop\c programs>a
Enter length of rectangle:5
Enter breadth of rectangle:3
area of rectangle:15.000000
C:\Users\USER\Desktop\c programs>a
Enter length of rectangle:15.4
Enter breadth of rectangle:20.16
area of rectangle:310.463990
*/