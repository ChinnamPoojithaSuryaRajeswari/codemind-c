#include<stdio.h>
int main()
{
    int n,m,s=1,q,w,e=1,r,t,y,u,i,p=0,a,d=0;
    scanf("%d%d",&n,&m);
    q=n; 
    w=n;
    while(m)
    { 
        s=s*10; m=m-1; 
    }
    t=s;
    while(q)
    {
        e=e*10;
        q=q/10;
    }
    y=e/t;
    u=w/y; 
    while(s>=10)
    {
        i=w%10; 
        p=p*10+i;
        w=w/10;
        s=s/10; 
    } 
    while(p)
    {
        a=p%10;
        d=d*10+a; 
        p=p/10;
    }
    if(d>u) 
    {
        printf("%d",d-u); 
            }
            else
            { printf("%d",u-d); }
    
}