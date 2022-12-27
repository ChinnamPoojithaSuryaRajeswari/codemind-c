#include<stdio.h>
int main()
{
    int N,K,M;
    scanf("%d%d%d",&N,&K,&M);
    int Q;
    Q=K*M;
    if(N%Q==0)
    {
        printf("%d",N/Q);
    }
    else if(N%Q>=1)
    {
        printf("%d",N/Q+1);
    }
}