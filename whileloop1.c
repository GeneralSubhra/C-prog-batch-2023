#include<stdio.h>
int main()
{
    int num;
    printf("Enter the value: ");
    scanf("%d",&num);
    int i=1; //initialization
    while(i<=num) //condition
    {
        printf("%d ",i);
        i++; //iteration
    }
    return 0;
}
