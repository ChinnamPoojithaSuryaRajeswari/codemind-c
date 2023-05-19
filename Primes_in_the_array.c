#include<stdio.h>
int main()
{
    int n,i,j,c,s;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=2;j<=a[i];j++)
        {
            if((a[i])%j==0)
            {
                c=c+1;
            }
        }
        if(c==1)
        {
            s=s+1;
        }
    }
    printf("%d",s);
}