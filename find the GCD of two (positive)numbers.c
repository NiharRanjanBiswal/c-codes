#include<stdio.h>
int main()
{
  int a,b,min,i,gcd;
  printf("Enter the value of a and b : ");
  scanf("%d%d",&a,&b);
  min=a<b?a:b;
  for(i=1;i<=min;i++)
  {
    if(a%i==0 && b%i==0)
    {
      gcd=i;
    }
  
  }
  printf("The GCD of %d and %d is : %d\n",a,b,gcd);
  return 0;
}
