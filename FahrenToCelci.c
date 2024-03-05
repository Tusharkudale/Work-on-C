#include<stdio.h>
int main()
{
float fahrenheit;
 
printf("temperature in fahrenheit:");
scanf("%f", &fahrenheit);

printf("celcius form is:%f",(fahrenheit-32)*5/9);
return 0;
}

/*
C:\Users\USER\Desktop\c programs>gcc FahrenToCelci.c

C:\Users\USER\Desktop\c programs>a
temperature in fahrenheit:50
celcius form is:10.000000
C:\Users\USER\Desktop\c programs>a
temperature in fahrenheit:200
celcius form is:93.333333
*/