#include<stdio.h>
int main()
{
   char s[200];
   int c=0;
   printf("enter the sentence: ");
   gets(s);
   for(int i=0;s[i]!='\0';i++)
   {
    if(s[i]==' ')
    {
        c++;
    }
   }     
   printf("Total words are:%d",c+1);
}

