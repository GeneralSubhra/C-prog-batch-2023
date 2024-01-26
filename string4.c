#include<stdio.h>
int main()
{
   char s[200];
   int c=0;
   printf("enter the sentence: ");
   gets(s);
   for(int i=0;s[i]!='\0';i++)
   {
    if(s[i]>=65 && s[i]<=90 )
    {
        c++;
    }
   }     
   printf("Total capital letter count is:%d",c);
}

