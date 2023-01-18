#include<stdio.h>
int main()
{
    int a,b,r,q,i,j,c=0,tc=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        c=0;
        q=i;
        tc=0;
        while(q!=0)
        {
            c++;
            r=q%10;
            if(r!=0 && i%r==0)
            {
                tc++;
            }
            q=q/10;
        }
        if(c==tc)
        {
            printf("%d ",i);
        }
    }
}