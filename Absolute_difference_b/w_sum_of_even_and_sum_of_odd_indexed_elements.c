#include<stdio.h>
int main()
{
    int n,i,j,c=0,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s=s+a[i];
        }
        else
        {
            c=c+a[i];
        }
    }
    if(s>c)
    {
        printf("%d",s-c);
    }
    else
    {
        printf("%d",c-s);
    }
}