#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    if((X+(2*Y))%2==0)
    {
        if(X==0 && Y%2!=0){
            printf("NO");
        }
    else{
        printf("YES");
    }
    }
    else
    {
        printf("NO");
    }
}