#include<math.h>
#include<stdio.h>
int main()
{
    int a;
    int num,pw;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter the power: ");
    scanf("%d",&pw);
    a=pow(num,pw);
    printf("%d",a);
}