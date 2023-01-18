#include<stdio.h>
int main()
{
    int n,i,c=0,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            c++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(i%2==1 && a[i]%2==1)
        {
            s++;
        }
    }
    if(s==c)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}