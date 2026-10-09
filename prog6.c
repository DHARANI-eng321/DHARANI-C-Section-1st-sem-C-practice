#include<stdio.h>
int main()
{
  int numofcopy,sellprice,costprice,profit,rent=100,sp=2000,cp=1000;
  scanf("%d%d%d",&numofcopy,&sellprice,&costprice);
  profit=sp - cp-rent;
  printf("%d",profit);
  return 0;
}
