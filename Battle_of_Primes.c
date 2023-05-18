#include<stdio.h>
int main()
{
    int n,m,i,j,k,c;
    scanf("%d %d",&n,&m);
    for(i=(n+m+1);i<=(n+m)*(n+m);i++)
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
            k=i;
            break;
        }
    }
    printf("%d",(k-(n+m)));
}