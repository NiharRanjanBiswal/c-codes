%%writefile test25.c
//WCP to find the nth tern of fibonacci series
#include<stdio.h>
int fib(int n)
{
  int a=0,b=1,c=0,i;
  if(n<1)
  {
    return n;
  }
  for(i=2;i<=n;i++)
  {
    c=a+b;
    a=b;
    b=c;
  }
  return a;
}
int main()
{
  int n;
  printf("Enter a number : ");
  scanf("%d",&n);
  printf("The %dth fibonacci number is %d", n, fib(n));
}
