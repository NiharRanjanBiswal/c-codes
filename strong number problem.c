#include<stdio.h>
int main()
{
    int n,i,temp,r,fact,sum=0;
    printf("Enter the value of n: \n");
    scanf("%d",&n);
    temp=n;
    
    while(n>0)
    {
        r=n%10;
        fact=1;
        for(i=r;i>=1;i--)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    n=temp;
    if(sum==n)
    {
        printf("Its a Strong Number \n");
        
    }
    else
    {
        printf("Not a strong number\n");
    }
    return 0;
}
