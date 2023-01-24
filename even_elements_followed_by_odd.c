#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n); 
    int t=n-1; 
    int a[t]; 
    int i=0;
    while(i<=t)
    {
        scanf("%d",&a[i]); 
        i++; }
        i=0;
        while(i<=t)
        { if(a[i]%2==0)
        {
            printf("%d ",a[i]); 
        } i++; 
            
        } i=0; 
        while(i<=t) 
        { if(a[i]%2!=0)
        { printf("%d ",a[i]); 
            
        } i++; }}