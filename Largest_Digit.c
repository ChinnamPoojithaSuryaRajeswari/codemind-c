#include<stdio.h>
int main()
{
    int n,ld=0,max=0;
    scanf("%d",&n);
    while(n!=0)
    {
        ld=n%10;
        if(max<ld)
        {
            max=ld;
        }
        n=n/10;
    }
    printf("%d",max);
}