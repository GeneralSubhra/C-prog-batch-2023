#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the 1st number: ");
    scanf("%d",&a);
    printf("enter the 2nd number: ");
    scanf("%d",&b);
    if(a>b)
    {
        printf("%d is greater",a);
    }
    else if(a==b)
    {
        printf("Both number are equal");
    }
    else{
        printf("%d is greater",b);
    }
    return 0;
}
