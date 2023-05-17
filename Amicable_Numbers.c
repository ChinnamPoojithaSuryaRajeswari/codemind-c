#include<stdio.h>
int main()
{
    int n,m,s=0,i,j,p=0;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
    }
    for(j=1;j<=m/2;j++)
    {
        if(m%j==0)
        {
            p=p+j;
        }
    }
    if(s==m && p==n)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}