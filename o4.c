#include <stdio.h>
int main() {
int base,exponent;
long long result=1;
printf("enter base");
scanf("%d",&base);
printf("enter exponent");
scanf("%d",&exponent);
for(int i=1;i<=exponent;i++){
result*=base;
}
printf("%d raised to the power %d is %lld\n",base,exponent,result);
return 0;
}
