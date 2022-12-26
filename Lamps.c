#include<stdio.h>
int main()
{
    int N,K,X,Y;
    scanf("%d%d%d%d",&N,&K,&X,&Y);
    if(N==K)
    {
        printf("%d",K*X);
    }
    else if(X>Y)
    {
        printf("%d",(K*X)+(N-K)*Y);
    }
    else
    {
        printf("%d",N*X);
    }
}