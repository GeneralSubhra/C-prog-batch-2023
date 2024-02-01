#include<stdio.h>
int main()
{
    int num,s=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    int copy=num;
    while(num!=0)
    {
        int r=num%10;
        num=num/10;
        int p=1;
        while(r>=1)
        {
            p=p*r;
            r--;
            printf("%d\n",p);
        }
        printf("\n");
        s=s+p;
    }
    if(s==copy)
    {
        printf("Its a krishnamurti Number");
    }
    else
    {
         printf("Its not a krishnamurti Number");
    }
}