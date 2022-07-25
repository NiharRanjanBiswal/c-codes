%%writefile test26.c

#include<stdio.h>
int fib(int n)
{
  int i,a=0,b=1,c=0;
 if(n<1)
 {
     return n;
 }
 for(i=0;i<=n;i++)
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
     printf("Enter the value of n: ");
     scanf("%d",&n);
  printf("The %d th term of fibonacci series is : %d",n,fib(n));
 }
