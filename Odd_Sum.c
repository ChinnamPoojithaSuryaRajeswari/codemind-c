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
        if(a[i]%2!=0)
        {
            s=s+a[i];
        }
    }
        printf("%d",s);
}