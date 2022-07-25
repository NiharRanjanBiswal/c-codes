%%writefile test19.c
#include<stdio.h>
int main()
{
    int n,r,c,temp,sum=0;
 printf("Enter n value : ");
 scanf("%d",&n);
 temp=n;
 while(n>0)
 {
     r=n%10;
     c=r*r*r;
     sum= sum+c;
     n=n/10;
 }
 n=temp;
 if(n==sum)
 {
     printf("%d is an Armstrong Number\n",n);
 }
 else 
 {
     printf("%d is Not an Armstrong Number\n",n);
 }

}
