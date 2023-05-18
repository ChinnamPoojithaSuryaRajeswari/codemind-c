#include<stdio.h>
int main()
{
    int n,m,c,i,j;
    scanf("%d %d",&n,&m);
    for(i=n;i<=m;i++)
    {
        c=0;
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                c=c+1;
            }
        }
        if(c==1)
        {
            printf("%d
",i);
        }
    }
}