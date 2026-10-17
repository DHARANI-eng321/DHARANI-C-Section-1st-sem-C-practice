#include<stdio.h>
void max(int a, int b,int c)
{
   if(a>b && a>c)
   printf("a is big");
   else if(b>c)
   printf("b is big");
   else
   printf("c is big");
}
int main()
{
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  max(a,b,c);
  return 0;
}
