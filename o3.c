#include <stdio.h>
#include <math.h>
int main() {
double base,exponent,result;
printf("enter base:");
scanf("%lf",&base);
printf("enter exponent:");
scanf("%lf",&exponent);
result=pow(base,exponent);
printf("%.2lf raised to the power %.2lf is %.2lf\n",base,exponent,result);
return 0;
}

