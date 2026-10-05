#include <stdio.h>
int main ()
{
  int a,b,choice,res;
  printf("=====BRANCHING STATEMENTS=====\n");
  printf("enter the first number:");
  scanf("%d",&a);
  printf("enter the second number:");
  scanf("%d",&b);
  printf("\n-----MENU----\n");
  printf("1.check positive, negative opr zero\n");
  printf("2.check even or odd\n");
  printf("3.find largest of two numbers\n");
  printf("4.check divisibility by 5\n");
  printf("\nEnter your choice:");
  scanf("%d",&choice);
  printf("\n-----Result-----\n");
  switch(choice)
    {
     
     case 1:
      if(a>0)
        printf("%d is positive",a);
        
      else if(a<0)
        printf("%d is negative",a);
        
      else
        printf("%d is zero", a);
        
      break;
      
     case 2:
      if(a%2==0)
        printf("%d is even",a);
        
      else
        printf("%d is odd",a);
        
      break;
      
     case 3:
       if(a>b)
       
       {
         res = a;
         printf("%d is the largest number",res);
         
       }
       
       else if(b>a)
       
       {
         res = b;
         printf("%d is the largest number",res);
         
       }
       
       else 
       
       {
       
         printf("both numbers are equal");
         
       }
       
       break;
       
      case 4:
      
       if(a%5==0);
        printf("%d is not divisible by 5",a);
        
       break ;
       
         printf("invalid choice.");
         
       }
         return 0;
         
       }
             
                              

