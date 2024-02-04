#include<stdio.h>
void call_by_value(int a)
{
    a=a+5;
    printf("value is %d\n",a);
}

int main()
{
    int a;
    printf("enter value ");
    scanf("%d",&a);
    call_by_value(a);
    printf("in main function value %d",a);
    return 0;
}