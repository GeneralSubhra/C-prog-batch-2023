#include<stdio.h>
void sum() //without argument/parameter
{
    int a,b;
    printf("enter numbers:");
    scanf("%d %d",&a,&b);
    int sum=a+b;
    printf("The sum is:%d\n",sum);
}

void sum1(int a,int b) //parameterized
{
    int sum=a+b;
    printf("Sum1 func called\n");
    printf("The sum is:%d\n",sum);
}

int sum2() //without parameter with returning value
{
    int a,b;
    printf("enter numbers:");
    scanf("%d %d",&a,&b);
    return a+b;

}

int sum3(int a,int b) //returning value using parameter
{
    return a+b;
}

int main()
{
    int a,b,sum;
    printf("enter numbers:");
    scanf("%d %d",&a,&b);
    sum=sum3(a,b);
    printf("The sum is:%d\n",sum);
    return 0;
}