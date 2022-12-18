#include<stdio.h>
int main()
{
    int n,q,m,s=0,i;
    scanf("%d",&n);
    q==n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
    }
    m=s-n;
    if(n==m)
    {
        printf("PERFECT");
    }
    else if(m<n)
    {
        printf("DEFICIENT");
    }
    else if(m>n)
    {
        printf("ABUNDANT");
    }
}