#include<stdio.h>
int main()
{
    int n,i,s=0,c,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=0;
        if(n%i==0)
        {
            for(j=2;j<=i;j++)
            {
                if(i%j==0)
                {
                    c=c+1;
                }
            }
            if(c!=1)
            {
                s=s+1;
            }
        }
    }
    printf("%d",s);
}