#include<stdio.h>
int main()
{
    int n,m,k,l;
    scanf("%d%d%d",&n,&m,&k);
    l=(2*n*m*k*512)/1024;
    printf("%dKB",l);
}