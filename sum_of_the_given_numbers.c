#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n][2];
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);}
            }
            for(i=0;i<n;i++)
            {
                for(j=0;j<2;j++)
                {printf("%d
",a[i][j]+a[i][j+1]);
                j++;}}}