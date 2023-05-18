#include<stdio.h>
int main()
{
    int n,i,j,c,s=0;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            c=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    c=c+1;
                }
            }
            if(c>2)
            {
                s=s+1;
            }
        }
    }
    printf("%d",s+1);
}