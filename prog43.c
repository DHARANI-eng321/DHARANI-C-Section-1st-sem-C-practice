#include<stdio.h>
int main()
{
    int celsius;
    scanf("%d",&celsius);
    float fahrenheit,kelvin;
    fahrenheit=(celsius*9/5)+32;
    kelvin=celsius+273.15;
    printf("%.2f %.2f ",fahrenheit,kelvin);
    return 0;
}
