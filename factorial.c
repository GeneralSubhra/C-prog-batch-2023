#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int i=1,fact=1;
    while(i<=num)
    {
        fact=fact*i;
        i++;
    }
    printf("The Factorial is:%d ",fact);
}