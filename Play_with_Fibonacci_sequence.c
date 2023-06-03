#include<stdio.h>
int main()
{
    int n,i,a,b,c;
    scanf("%d",&n);
    a=0;
    b=1;
    printf("%d ",a);
    for(i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",a);
    }
}