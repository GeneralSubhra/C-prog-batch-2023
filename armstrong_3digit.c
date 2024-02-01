#include<stdio.h>
int main()
{
    int a,s=0;
    printf("Enter the number: ");
    scanf("%d",&a);
    int copy=a;
    while(a!=0)
    {
        int r=a%10;
        a=a/10;
        s=s+(r*r*r);
        
    }
    if(s==copy)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not Armstrong Number");
    }
    return 0;
}
