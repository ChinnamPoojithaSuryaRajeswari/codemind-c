#include<stdio.h>
int main()
{
    int a,n,m,i;
    scanf("%d%d%d",&a,&n,&m);
    for(i=n;i<=m;i++)
    {
        printf("%d x %d = %d
",a,i,a*i);
    }
}