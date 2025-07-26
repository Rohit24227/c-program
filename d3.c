#include <stdio.h>
int main() {
int dividend,divisor,remainder;
printf("enter the dividend:");
scanf("%d",&dividend);
printf("enter the divisor:");
scanf("%d",&divisor);
remainder=dividend%divisor;
printf("remainder=%d\n",remainder);
return 0;
}
