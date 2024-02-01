#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Value 1: ");
    scanf("%d",&a); //input
    printf("Enter Value 2: ");
    scanf("%d",&b);
    printf("\nThe sum is %d",a+b);
    printf("\nThe diffrence is %d",a-b);
    printf("\nThe product is %d",a*b);
    printf("\nThe div is %d",a/b);
    printf("\nThe reminder is %d",a%b);
    return 0;
}
