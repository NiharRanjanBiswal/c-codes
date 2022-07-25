%%writefile test23.c
//WCP to find first n terms of fibonacci series

#include<stdio.h>
int main()
{
  int a=0,b=1,i,n,c;
  printf("Enter the value of n : ");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {  
     printf("%d\t",a);
     c=a+b;
     a=b;
     b=c;
  }
  return 0;
}
