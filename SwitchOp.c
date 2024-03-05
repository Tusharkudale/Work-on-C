#include<stdio.h>
int main()
{
   int day; //let 1-monday; 2-tuesday; 3-wednesday;.......7-Sunday
  /*in format of character just use 
  char day;  (m-monday; t-tuesday;....T-Thursday;...s-saturday; S-Sunday)
  */
   printf("\n Enter Day(1-7):");
   scanf("%d", &day);

   switch (day)
   {
    case 1: printf("monday\n"); //case m:
            break;
    case 2: printf("tuesday\n");//case t:
            break;
    case 3: printf("wednesday\n");//case w:
            break;        
    case 4: printf("Thursday\n");//case T:
            break;  
    case 5: printf("friday\n");//case f:
            break;  
    case 6: printf("saturday\n");//case s:
            break; 
    case 7: printf("Sunday\n");//case S:
            break;    
    default:printf("NOT A VALID DAY!!!");
   }
   return 0;
}