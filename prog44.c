
#include<stdio.h>
#include<math.h>
int main()
{
   int P,R,T;
   float amount,Compount_interest;
   scanf("%d%d%d",&P,&R,&T);
   amount=P*(1+R/100.0)*(1+R/100.0);
   Compount_interest=amount-P;
   printf("Compount_interest: %.2f\n",Compount_interest);
   printf("amount: %.2f",amount);
   return 0;
}
   
