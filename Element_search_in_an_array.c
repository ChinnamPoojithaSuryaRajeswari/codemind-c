#include<stdio.h>
int main()
{
    int n,k,i,c=0,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(k==a[i])
        {
            s=s+1;
        }
        else{
            c=c+1;
        }
    }
    if(c==n)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}