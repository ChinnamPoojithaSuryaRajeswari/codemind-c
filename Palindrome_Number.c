#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int rev,r,i,m,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        rev=0;
        m=a[i];
        while(m>0)
        {
            r=m%10;
            rev=rev*10+r;
            m=m/10;
        }
        if(rev==a[i])
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}