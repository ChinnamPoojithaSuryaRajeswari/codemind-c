#include<stdio.h>
int main()
{
    int n,m,i,j,s=0;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<n-1;i++)
    {
        for(j=1;j<m-1;j++)
        {
            s=s+a[i][j];
        }
    }
    if(n==1 && m==1)
    {
        printf("0");
    }
    else
    {
    printf("%d ",s);
    }
}