#include<stdio.h>
int main()
{
    int n,m,i,j,c,s;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=2;j<=a[i];j++)
        {
            if((a[i])%j==0)
            {
                c=c+1;
            }
        }
        if(c==1)
        {
            if(a[i]<=m)
            {
            s=s+1;
        }}
    }
    printf("%d",s);
}