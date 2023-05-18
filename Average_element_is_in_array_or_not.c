#include<stdio.h>
int main()
{
    int n,i,c=0,s=0,l=0,q;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        l=l+a[i];
    }
    q=l/n;
    for(i=0;i<n;i++)
    {
        if(q==a[i])
        {
            s=s+1;
        }
        else{
            c=c+1;
        }
    }
    if(c==n)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}