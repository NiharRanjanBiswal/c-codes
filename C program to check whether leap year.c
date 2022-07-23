//C program to check whether leap year
#include<stdio.h>
int main()
{
  int n;
  printf("Enter the year : ");
  scanf("%d",&n);
  if((n%400==0)||(n%4==0 && n%100!=0))
  {
    printf("The year %d is a leap year ",n);
  }
  else
  {
    printf("The year %d is not a leap year ",n);
  }
  return 0;
}
