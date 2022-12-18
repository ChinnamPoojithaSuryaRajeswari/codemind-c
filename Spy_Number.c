#include<stdio.h>
int main()
{
    int n,r,p=1,s=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s=s+r;
        p=p*r;
    }
    if(p==s)
    {
      printf("Spy Number");  
    }
    else
    {
        printf("Not Spy Number");
    }
}