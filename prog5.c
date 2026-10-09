#include<stdio.h>
int main()
{
  int mark;
  scanf("%d",&mark);
  if(100>= mark && mark >=90);
  {
  printf("A greade");
  }
  else if(90> mark && mark <=70);
  {
  printf("B grade");
  }
  else if(mark<70 && mark<=50)
  {
  printf("C grade");
  }
  else
  {
  printf("D grade");
  }
  return 0;
}
