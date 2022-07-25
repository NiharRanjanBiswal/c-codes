#include<stdio.h>
int main()
{
    int n,r=0,rem,temp=0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    temp=n;
    
    while(n!=0)
    {
        rem=n%10;
        r=(r*10)+rem;
        n=n/10;
    }
    n=temp;
    if(n==r)
    {
        printf("%d is a palindrome\n",n);
    }
    else
    {
        printf(" %d Not a Palindrome",n);
    }
    return 0;
}
