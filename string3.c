#include<stdio.h>
int main()
{
   char s[200];
   int c=0;
   printf("enter the sentence: ");
   gets(s);
   for(int i=0;s[i]!='\0';i++)
   {
    if(s=='a' ||s=='e' ||s=='i' ||s=='o' ||s=='u')
    {
        c++;
    }
   }     
   printf("Total vowel count is:%d",c);
}

