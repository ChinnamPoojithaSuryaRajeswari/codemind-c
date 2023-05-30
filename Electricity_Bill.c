#include<stdio.h>
int main()
{
    int u;
    scanf("%d",&u);
    printf("Units Consumed: %d
",u);
    float c;
    if(u<199)
    {
        c=1.20;
        printf("Cost per Unit: %0.2f
",c);
    }
    else if(u>=200&&u<400)
    {
        c=1.40;
        printf("Cost per Unit: %0.2f
",c);
    }
    else if(u>=400&&u<600)
    {
        c=1.60;
        printf("Cost per Unit: %0.2f
",c);
    }
    else if(u>=600&&u<800)
    {
        c=1.80;
        printf("Cost per Unit: %0.2f
",c);
    }
    else 
    {
        c=2.00;
        printf("Cost per Unit: %0.2f
",c);
    }
    float b,bill,sur;
    b=u*c;
    printf("Bill: %0.2f
",b);
    if(b>400)
    {
        sur=b*0.15;
        printf("Surcharge: %0.2f
",sur);
    }
    else
    {
        sur=0.00;
        printf("Surcharge: %0.2f
",sur);
    }
    bill=sur+b;
    printf("Total Amount: %0.2f
",bill);
    
}