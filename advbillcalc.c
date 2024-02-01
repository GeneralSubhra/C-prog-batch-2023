#include<stdio.h>
int main()
{   
    int calls;
    float bill
    printf("Enter the number of calls: ");
    scanf("%d",&calls);
    if(calls<=100)
    {
        bill=150.0;
    }
    else if(calls<=200)
    {
        bill=150+((calls-100)*0.8);
    }
    else if(calls<=350)
    {
        bill=150+100*0.8+(calls-200)*1;
    }
    else
    {
         bill=150+(100*0.8)+(150*1)+((calls-350)*2);
    }
    printf("Total bill: %0.2f",bill);
    return 0;
}
