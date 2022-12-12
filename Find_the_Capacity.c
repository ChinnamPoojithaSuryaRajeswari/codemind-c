#include<stdio.h>
int main()
{
    int i,c=1,cap;
    int a[3];
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        c=a[i]*c;
    }
    cap=(c*2*512)/1024;
    printf("%dKB",cap);
}