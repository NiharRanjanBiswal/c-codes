//write a C program to find out greatest among three integers using conditional operator//

#include<stdio.h>
int main()
{
  int a,b,c,big;
  printf("Enter three no's : ");
  scanf("%d%d%d",&a,&b,&c);

  big=(a>b && a>c)?(a):((b>c)?(b):(c));
  printf("The Biggest Number is : %d",big);

  return 0;
}

