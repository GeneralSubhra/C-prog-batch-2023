#include<stdio.h>
void check(int a)
{
    if(a%2==0)
    {
        printf("\nEven number");
    }
    else
    {
        printf("\nOdd number");
    }
}

int main()
{
    int a,b,c;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("Enter the number: ");
    scanf("%d",&b);
    printf("Enter the number: ");
    scanf("%d",&c);
    check(a);
    check(b);
    check(c);
    return 0;

}