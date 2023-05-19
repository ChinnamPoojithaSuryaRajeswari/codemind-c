#include<stdio.h>
int main()
{
    int n,m,i,c=0;
    scanf("%d",&n);
     scanf("%d",&m);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
       for(i=0;i<n;i++)
    {
        if(a[i]%m!=0)
        {
            c=c+1;
        }
    }
    printf("%d",c);
}