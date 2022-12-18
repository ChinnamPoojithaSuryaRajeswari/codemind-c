#include<stdio.h>
int main()
{
    int n,m,i,q,w;
    scanf("%d%d",&n,&m);
    q=n+1;
    w=m-1;
    for(i=q;i<=w;i++)
    {
        printf("%d %d %d
",i,i*i,i*i*i);
    }
}