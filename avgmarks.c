#include<stdio.h>
int main()
{
    int s1,s2,s3,s4;
    printf("Enter subject 1 marks: ");
    scanf("%d",&s1);
    printf("Enter subject 2 marks: ");
    scanf("%d",&s2);
    printf("Enter subject 3 marks: ");
    scanf("%d",&s3);
    printf("Enter subject 4 marks: ");
    scanf("%d",&s4);
    
    float avg;
    avg=(s1+s2+s3+s4)/4;
    printf("The average Marks is:%0.2f\n",avg);
    if(avg>=80)
    {
        printf("Grade A");
    }
    else if(avg<80 && avg>=50)
    {
        printf("Grade B");
    }
    else if(avg<50 && avg>=30)
    {
        printf("Grade C");
    }
    else{
        printf("Fail");
    }
    

    return 0;
}
