#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int a[n],sum=0;
   float avg=0;
   
   for(int i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
     sum=sum+a[i];
     avg=(float)sum/n;
   }printf("%.2f",avg);
   
   return 0;
 }
