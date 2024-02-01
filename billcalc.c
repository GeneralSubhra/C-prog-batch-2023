#include<stdio.h>
int main()
{
    int call;
    printf("Enter the number of calls: ");
    scanf("%d",&call);
    float bill;
    if(call>=1000)
    {
        bill = call * 2;
        printf("The total bill is %0.2f",bill);
    }
    else if(call>=500 && call<1000)
    {
        bill = call *1;
        printf("The total bill is %0.2f",bill);
    }
    else if(call>=100 && call<500)
    {
        bill = call * 0.9;
        printf("The total bill is %0.2f",bill);
    }
    else
    {
        bill = call * 0.5;
        printf("The total bill is %0.2f",bill); 
    }
    return 0;
}
