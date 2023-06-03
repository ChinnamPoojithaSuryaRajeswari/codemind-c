#include<stdio.h>
int main()
{
    int n,q,i,w,s,e,t,j,c,p,k;
    scanf("%d",&n);
    for(i=n-1;i>=10;i--)
    {
        q=i;
        s=0;
        while(q)
        {
        w=q%10;
        s=s*10+w;
        q=q/10;
        }
        if(i==s)
        {e=i;
        break;}
    }
    for(j=n+1;j<=n*n;j++)
    {
        t=j;
        c=0;
        while(t)
        {
            p=t%10;
            c=c*10+p;
            t=t/10;
        }
        if(j==c)
        {
            k=j;
            break;}}
        if((n-e)>(k-n))
        {printf("%d",k);
        }
        else if((n-e)<(k-n))
        {
            printf("%d",e);
        }
        else{printf("%d %d",e,k);
        }
}