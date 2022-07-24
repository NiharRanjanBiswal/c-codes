//wcp to find out factorial of a given(positive ) number//

#include<stdio.h>
long int main()
{
  long int n,i,fac=1;
  printf("Enter the value for factorial: ");
  scanf("%ld",&n);
  
  for(i=1;i<=n;i++)
  {
     fac=fac*i;
  }
  printf("The factorial of %ld is :%ld ",n,fac);
  return 0;
}
