#include<stdio.h>
#include<string.h>
int main()
{
   char s[200];
   printf("enter the sentence: ");
   gets(s);
   int len = strlen(s);
   printf("Total length is:%d",len);
}

