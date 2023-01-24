#include<stdio.h>
int main()
{
    int r,n,e=0,o=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(r%2==0)
        o++;
        else
        e++;
        n=n/10;
    }
    if(o>0&& e==0)
    {
        printf("Even");
    }
    else if(o==0&& e>0)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}