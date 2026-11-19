#include<stdio.h>
int main()
{
  FILE*fp;
  fp=fopen("data1.txt","w");
  if(fp==NULL)
  {
     printf("file opening failed");
     return 1;
   }
   fprintf(fp,"hello world");
   fclose(fp);
   printf("file written successfully");
   return 0;
}
