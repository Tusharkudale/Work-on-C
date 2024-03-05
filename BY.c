#include<stdio.h>

void main()
{
    int age,current_yr,birth_yr;

    printf("Enter your age:");
    scanf("%d",&age);
    printf("Enter Current Year: ");
    scanf("%d",&current_yr);

    {
        birth_yr=current_yr-age;
        printf("Your Birth year is:%d",birth_yr);    
    }

}
