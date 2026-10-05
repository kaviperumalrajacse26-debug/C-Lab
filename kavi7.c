#include <stdio.h>
int main()
{
   int a,b,res,choice;
   printf("=====BITWISE OPERATIONS=====\N");
   printf("enter the first number:");
   scanf("%d",&a);
   printf("enter the second number:");
   scanf("%d",&b);
   printf("\n-----MENU-----\n");
   printf("1.Bitwise AND &\n");
   printf("2.Bitwise OR (|)\n");
   printf("3.Bitwise XOR (^)\n");
   printf("4.Bitwise NOT (~)\n");
   printf("5.Left shift (<<)\n");
   printf("6.Bitwise AND &\n");
   printf("\nEnter your choice:");
   scanf("%d",&choice);
   switch(choice)
   {
     case 1:
     
     res = a&b:
     printf("Bitwise AND Result = 5D,RES);
     break;
     
     case 2:
     
     res = a|b;
     printf("Bitwise OR Result =%d",res);
     break;
     
     case 3:
     
     res = a^b;
     printf("Bitwise AND Result = %d",res);
     break;
     
     case 4:
     
     res = ~a;
     printf("Bitwise NOT Result =%d",res);
     break;
     
     case 5:
     
     res = a<<b;
     printf("Left shift result = %d",res);
     break;
     
     case 6:
     
     res = a>>b;
     printf("Right shift result = %d",res);
     break;
     
   default:
      printf("invalid choice.");
      
      }
      
      return 0;
      }
     
