#include<stdio.h>
int main()
{
  int age,ticketprice;
  scanf("%d",&age);
  if(age>60)
  {
     printf("ticketprice:100");
     if(age>5 && age<=12)
     printf("ticket price:10");
     else if(age>12&&age<30)
     printf(ticketprice:50);
  }
  else
  {
    printf("ticketprice:0");
  }
  return 0;
}
