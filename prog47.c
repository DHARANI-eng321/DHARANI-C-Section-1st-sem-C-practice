#include<stdio.h>
int main()
{
  FILE*fp;
  fp=fopen("data.txt","w");
  if(fp==NULL)
  {
    printf("file opening failed");
    return 1;
  }
  fprintf(fp,"karpagam collge of engineering");
  fclose(fp);
  printf("data written successfully");
  return 0;
  }
