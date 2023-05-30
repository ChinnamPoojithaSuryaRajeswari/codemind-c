#include<stdio.h>
int main()
{
    int n,k=0,l=0,s=0,r;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        k=k+1;
        if(n%2==0)
        {
            s=s+1;
        }
        else
        {
            l=l+1;
        }
        n=n/10;
    }
    if(k==s)
    {
        printf("Even");
    }
    else if(k==l)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}