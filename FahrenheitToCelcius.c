#include<stdio.h>
int main()
{
int celcius;
 
printf("temperature in celcius:");
scanf("%d", &celcius);

printf("Fahrenheit form is:%d",celcius*9/5+32);
return 0;
}