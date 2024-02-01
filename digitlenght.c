#include<stdio.h>
int main()
{
    int a,count=0;
    printf("Enter the number: ");
    scanf("%d",&a);
    
    while(a!=0)
    {
        int r=a%10;
        a=a/10;
        count++;
        
    }
  printf("the lenght of the number is %d",count);
    return 0;
}
