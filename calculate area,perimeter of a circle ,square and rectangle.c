/*write a C program to calculate area,perimeter of a circle ,square and
rectangle*/

#include<stdio.h>
#include<math.h>
#define PI 3.1415
int main()
{
   int choice;
   while(1)
   {
   printf("\nEnter \n1.for finding area of circle and perimeter\n2.for finding area of square and perimeter\n3.for finding area of rectangle and perimeter\n");
   scanf("%d",&choice);
   switch(choice)
   {
     case 1:
     {
       int r,area,perimeter;
       printf("Enter the radius: ");
       scanf("%d",&r);
       area=PI*r*r;
       perimeter=2*PI*r;
       printf("The area of circle = %d\n",area);
       printf("The perimeter is : %d",perimeter);
       break;
     }
    

     case 2:
     {
       int a,area,perimeter;
       printf("Enter the side of square : ");
       scanf("%d",&a);
       area=a*a;
       perimeter=4*a;
       printf("Area of square is : %d",area);
       printf("\nPerimeter of square is : %d",perimeter);
       break;
     }
     

     case 3: 
     {
       int l,b,h,area,perimeter;
       printf("Enter the length : ");
       scanf("%d",&l);
       printf("Enter the breadth : ");
       scanf("%d",&b);
       area=l*b;
       perimeter=2*(l+b);
       printf("The area of rectangle is: %d",area);
       printf("\nThe perimeter of rectangle is :%d",perimeter);
       break;
     }
     default:
     {
       printf("Invalid choice \n ");
     }
     break;
  }
}
}
