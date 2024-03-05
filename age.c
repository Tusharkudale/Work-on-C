#include<stdio.h>

void main()
{
    int age,current_yr,birth_yr;

    printf("Enter Current Year:");
    scanf("%d",&current_yr);
    printf("Enter your birth year:");
    scanf("%d",&birth_yr);

    {
        age=current_yr-birth_yr;
        printf("Your current age is:%d",age);    
    }

}
