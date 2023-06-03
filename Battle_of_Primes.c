#include<stdio.h>
int main()
{
    int n,m,i,j,s,l,k;
    scanf("%d%d",&n,&m);
    l=n+m;
    for(i=l+1;i<l*l;i++)
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
            k=i;
            break;
        }
    }
    printf("%d",k-(n+m));
}