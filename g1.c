#include<stdio.h>
int main() {
int n;
printf("enter how many natural numbers to print");
scanf("%d",&n);
printf("first %d natural numbers are:\n",n);
for(int i=1;i<=n;i++){
printf("d%",i);
}
return 0;
}
