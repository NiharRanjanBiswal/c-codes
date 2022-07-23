//write a C program to take three sides as input of a triangle and check the feasibility of its formation//
#include<stdio.h>
int main()
{
  int a,b,c;
  printf ("Enter the 3 sides of Triangle : ");
  scanf("%d%d%d",&a,&b,&c);
  if(a+b>c&&b+c>a&&a+c>b)
  {
    printf("It is a triangle");
  }
  else
  {
    printf("Its not a Triangle");
  }
  return 0;
}
