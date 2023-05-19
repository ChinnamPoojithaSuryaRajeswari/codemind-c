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
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
       if(a[i]<=m)
       {
           s=s+a[i];
       }
    }
    printf("%d",s);
}