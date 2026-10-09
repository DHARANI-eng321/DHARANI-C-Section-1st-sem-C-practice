#include<stdio.h>
int main()
{
  int x,y,add,mult;
  scanf("%d%d",&x,&y);
  switch(x,y)
  {
    case 1:printf("add=%d",x+y);
    break;
    case 2:printf("mult=%d",x*y);
    break;
    default:printf("nothing");
    }
    return 0;
 }
    
