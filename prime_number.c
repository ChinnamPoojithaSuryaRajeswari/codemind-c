#include<stdio.h>
int main()
{
    int n,c=0,i;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            c=c+1;
        }
    }
    if(c==1)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
        }
}