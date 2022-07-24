//wcp to print first n natural numbers using loop where n is given by user)

#include<stdio.h>
int main()
{
  int i,n;
  printf("Enter the value of n  : ");
  scanf("%d",&n);

  printf("Printing natural numbers from 1 to %d\n",n);

  i=0;
  while(i<=n)
  {
    printf("%d\t",i);
    i++;

  }
  printf("\n");
  return 0;
}
