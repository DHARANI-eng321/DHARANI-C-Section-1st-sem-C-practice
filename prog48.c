#include<stdio.h>
int main()
{
   FILE*fp;
   char str[50];
   fp=fopen("data.txt","r");
   if(fp==NULL)
   {
     printf("faile opening failed");
     return 1;
   }  
   fscanf(fp,"%[^\n]",str);
   printf("%s",str);
   fclose(fp);
   return 0;
 }
