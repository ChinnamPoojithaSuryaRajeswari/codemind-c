#include<stdio.h>
int main()
{
    int n,i,s,r;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
       for(i=0;i<n;i++)
    {
        s=0;
        while(a[i]!=0)
        {
            r=a[i]%10;
            s=s*10+r;
            a[i]=a[i]/10;
        }
        printf("%d ",s);
    }
}