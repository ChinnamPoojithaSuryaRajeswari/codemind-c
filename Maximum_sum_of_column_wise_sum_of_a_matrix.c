#include<stdio.h>
int main()
{
    int n,m,i,j,s,k=0;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++)
    {
     for(j=0;j<m;j++)
     {
        scanf("%d",&a[i][j]);
     }
    }
    for(i=0;i<m;i++)
    {
        s=0;
        for(j=0;j<n;j++)
        {
            s=s+a[j][i];
        }
        if(s>=k)
        {
            k=s;
        }
    }
            printf("%d ",k);
}
