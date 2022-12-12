#include<stdio.h>
int main()
{
    int n,i,sum=0,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            sum=sum+a[i];
        }
        else if(a[i]%2==1)
        {
            s=s+a[i];
        }
    }
    int d;
    if(s>sum)
    {
    d=s-sum;
    printf("%d",d);
    }
    else
    {
        d=sum-s;
        printf("%d",d);
    }
}