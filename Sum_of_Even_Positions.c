#include<stdio.h>
int main()
{
    int n,i,s=0;
    scanf("%i",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%i",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
}