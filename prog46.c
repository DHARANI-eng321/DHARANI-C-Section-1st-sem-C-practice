#include<stdio.h>
int main()
{
  int r,h;
  scanf("%d%d",&r,&h);
  float Volume,Total_surface_area;
  printf("Volume: %.2f\n",3.14159*r*r*h);
  printf("Total surface area: %.2f\n",2*3.14159*r*(r+h));
  return 0;
  }
