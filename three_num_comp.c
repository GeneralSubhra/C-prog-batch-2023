#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the 1st number: ");
    scanf("%d",&a);
    printf("enter the 2nd number: ");
    scanf("%d",&b);
    printf("enter the 3rd number: ");
    scanf("%d",&c);
    
    if(a>b && a>c)
    {
        printf("%d is greater",a);
    }
    else if(b>a && b>c)
    {
        printf("%d is greater",b);
    }
    else{
        printf("%d is greater",c);
    }
    return 0;
}
