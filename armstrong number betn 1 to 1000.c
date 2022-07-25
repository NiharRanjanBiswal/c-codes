%%writefile test20.c
//WCP to check print all Armstrong number with in 1000 using loop 
#include<stdio.h>
int main()
{
  int n,x,sum,r,c;
  printf("Armstrong numbers between 1 and 1000 are : \n");
  for(n=1;n<=1000;n++)
  {
    sum=0;
    x=n;
   while(x!=0)
   {
     r=x%10;
     c=r*r*r;
     sum=sum+c;
     x=x/10;
   }
   if(sum==n)
   {
     printf("%d\n",n);
   }
  }
  return 0;
}
