#include<stdio.h>
int main()
{
    int n,m,k,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    k=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>k)
        {
            k=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]+m>=k)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}