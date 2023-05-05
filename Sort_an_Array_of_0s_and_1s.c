#include<stdio.h>
int main()
{
    int n,i,c=0,co=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            c++;
        }
        else
        {
            co++;
        }
    }
    for(i=0;i<c;i++)
    {
        printf("%d ",0);
    }
    for(i=0;i<co;i++)
    {
        printf("%d ",1);
    }
}