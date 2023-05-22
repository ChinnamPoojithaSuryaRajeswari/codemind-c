#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i!=0 && i!=n-1)
        {
        if(a[i-1]%2==0 && a[i+1]%2==0 && a[i]%2!=0)
        {
            c=c+1;
        }
        }
    }
    printf("%d",c);
}