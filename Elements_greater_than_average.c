#include<stdio.h>
int main()
{
    int n,t=0,s=0,p,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    p=s/n;
    for(i=0;i<n;i++)
    {
        if(a[i]>=p)
        {
            t=t+1;
        }
    }
    printf("%d",t);
}