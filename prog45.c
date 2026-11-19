#include<stdio.h>
int main()
{
  int P,SI,T,R;
  
  scanf("%d%d%d",&P,&SI,&T);
   R=(SI*100.0)/(P*T);
  printf("%.2f",(float)R);
  return 0;
  }
  
