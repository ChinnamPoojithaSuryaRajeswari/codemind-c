#include<stdio.h>
int main()
{
    int n,r,s=0,q;
    scanf("%d",&n);
    q=n;
    while(n)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(q==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}