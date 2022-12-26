#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    if(n%10==0)
    {
        printf("%d",n/10);
    }
    else if(n%10==5)
    {
        printf("%d",(1)+(n/10));
    }
    else
    {
        printf("-1");
    }
}