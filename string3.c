#include<stdio.h>
int main()
{
   char s[200];
   int c=0;
   printf("enter the sentence: ");
   gets(s);
   for(int i=0;s[i]!='\0';i++)
   {
    if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u')
    {
        c++;
    }
   }     
   printf("Total vowel count is:%d",c);
}


