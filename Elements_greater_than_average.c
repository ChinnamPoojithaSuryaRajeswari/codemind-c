#include<stdio.h>
int main()
{
    int n,i,s=0,k,c=0;
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
    k=s/n;
    for(i=0;i<n;i++)
    {
        if(a[i]<k)
        {
            c=c+1;
        }
    }
    printf("%d",n-c);
}