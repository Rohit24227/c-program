#include <stdio.h>
int main() {
int n;
long long product=1;
printf("enter the value of n");
scanf("d",&n);
for(int i=1;i<=n;i++){
product*=i;
}
printf("product of the first %d natural numbers is %lld\n",n,product);
return 0;
}
