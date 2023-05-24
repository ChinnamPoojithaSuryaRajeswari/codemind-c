#include<stdio.h>
int main()
{
    int n,m,i,j,s,c=0,l=0,k;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=0;j<m;j++)
        {
            s=s+a[i][j];
        }
        if(s>c)
        {
            c=s;
        }
    }
     for(i=0;i<n;i++)
    {
        k=0;
        for(j=0;j<m;j++)
        {
            k=k+a[i][j];
        }
        if(k>l)
        {
            l=k;
        }
    }
    if(c>l)
    {
        printf("%d",c);
    }
    else
    {
        printf("%d",l);
    }
}