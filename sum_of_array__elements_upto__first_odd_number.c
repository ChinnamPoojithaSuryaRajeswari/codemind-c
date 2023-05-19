#include<stdio.h>
int main()
{
    int n,m,i,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            m=i;
            break;
        }
    }
    for(i=0;i<n;i++)
    {
       if(i<m)
       {
           s=s+a[i];
       }
    }
    printf("%d",s);
}