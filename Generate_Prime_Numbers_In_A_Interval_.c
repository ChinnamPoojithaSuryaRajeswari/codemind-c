#include<stdio.h>
int main()
{
    int n,m,s,i,j;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        s=0;
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                s=s+1;
            }
        }
        if(s==1)
        {
            printf("%d
",i);
        }
    }
}