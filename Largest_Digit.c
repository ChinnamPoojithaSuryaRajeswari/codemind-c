#include<stdio.h>
int main()
{
    int n,r,k=0;
    scanf("%d",&n);
    while(n){
        r=n%10;
        if(r>k)
        {
            k=r;
        }
        n=n/10;
    }
    printf("%d",k);
}