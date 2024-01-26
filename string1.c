#include<stdio.h>
int main()
{
    char a;
    printf("Enter the letter: ");
    scanf("%c",&a);
    if(a=='a' ||a=='e' ||a=='i' ||a=='o' ||a=='u')
    {
        printf("%c is vowel",a);
    }
    else{
        printf("%c is not a vowel",a);
    }
    return 0;
}

