#include<stdio.h>
int main()
{
    int n,i,l=0,p,s=0;
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
        if(p>=a[i])
        {
            l=l+1;
        }
    }
    printf("%d",l);
}