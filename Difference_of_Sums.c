#include<stdio.h>
int main()
{
    int n,i,j,sum=0,s=0;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        sum=sum+i;
    }
    for(j=n;j>=1;j--)
    {
        s=s+(j*j);
    }
    printf("%d",(sum*sum)-s);
}