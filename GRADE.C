#include<stdio.h>
int main()
{
    int marks;
    printf("enter the total marks: ");
    scanf("%d",&marks);
    if(marks>600)
    {
        printf("Grade A");
    }
    else if(marks<=600 && marks >=400)
    {
        printf("Grade B");
    }
    else
    {
        printf("Grade C");
    }
    return 0;
}
