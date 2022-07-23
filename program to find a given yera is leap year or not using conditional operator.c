//write a program to find a given yera is leap year or not using conditional operator//
#include<stdio.h>
int main()
{
  int n;
  printf("Enter a year: ");
  scanf("%d",&n);
  if((n%4==0 && n%100!=0)?printf("Leap Year"):(n%400==0)?printf("Leap Year"):printf("Not a Leap Year"));
  return 0;
}
