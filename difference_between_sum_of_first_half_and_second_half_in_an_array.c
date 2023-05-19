#include<stdio.h>
int main()
{
    int n,i,j,l=0,k,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    k=n/2;
    for(i=0;i<k;i++)
    {
        s=s+a[i];
    }
    for(j=k;j<n;j++)
    {
        l=l+a[j];
    }
    if(s>l)
    {
    printf("%d
",s-l);
    }
    else
    {
        printf("%d",l-s);
    }
}