#include<stdio.h>
int main()
{
    int n,i,s,r;
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
            printf("1 ");
        }
        else
        {
        s=0;
        while(a[i]){
            r=a[i]%10;
            s=s+1;
            a[i]=a[i]/10;
        }
        printf("%d ",s);
        }
    }
}