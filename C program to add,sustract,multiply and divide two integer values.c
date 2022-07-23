//Write a C program to add,sustract,multiply and divide two integer values//

#include<stdio.h>
int main()
{
  int choice;
  while(1) 
 {
  printf("\nEnter \n1.For adding two values\n2.For substracting two values\n3.For multiplication of two values \n4.For division of two values\n");
  printf("Enter your choice : ");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
    { 
      int a,b,sum;
      printf("Enter the value of a : ");
      scanf("%d",&a);
      printf("Enter the value of b : ");
      scanf("%d",&b);
      sum=a+b;
      printf("The sum of %d and %d is :%d",a,b,sum);
      break;    
    }
    case 2:
    {
      int a,b,diff;
      printf("Enter the value of a : ");
      scanf("%d",&a);
      printf("Enter the value of b : ");
      scanf("%d",&b);
      diff=a-b;
      printf("The diff of %d and %d is :%d",a,b,diff);
      break;    
    }
    case 3:
    {
      int a,b,prod;
      printf("Enter the value of a: ");
      scanf("%d",&a);
      printf("Enter the value of b: ");
      scanf("%d",&b);
      prod=a*b;
      printf("The product of %d and %d is :%d",a,b,prod);
      break;
    }
    case 4:
    {
      int a,b,div;
      printf("Enter the value of a: ");
      scanf("%d",&a);
      printf("Enter the value of b: ");
      scanf("%d",&b);
      div=a/b;
      printf("The div of %d and %d is :%d",a,b,div);
      break;
    }
    default:
    {
      printf("\nInvalid input");
    }
  }
 }
 }
 
