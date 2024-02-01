#include<stdio.h>
int main()
{
    int a,sum=0;
    printf("Enter the number: ");
    scanf("%d",&a);

    while(a!=0)
    {
        int r=a%10;
        a=a/10;
        sum=sum+r;
        
    }
    printf("\nthe sum is %d",sum);
    return 0;
}
