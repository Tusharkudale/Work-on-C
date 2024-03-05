#include<stdio.h>
int main()
{
    int age;
    printf("\n Enter a age:");
    scanf("%d",&age);

    age>=18 ? printf("ADULT\n") : printf("NOT ADULT\n"); //TernaryOperatiorSyntax
     
    
    return 0;
}
