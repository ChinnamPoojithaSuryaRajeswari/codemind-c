#include<stdio.h>
int main()
{
    int n,r,s=0,q;
    scanf("%d",&n);
    q=n*n;
    while(q!=0)
    {
        r=q%10;
        q=q/10;
        s=s+r;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}