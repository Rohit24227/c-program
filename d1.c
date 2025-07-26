#include <stdio.h>
int main(){
float principal,rate,time,simpleinterest;
printf("enter principal amount:");
scanf("%f",&principal);
printf("enter rate of interest:");
scanf("%f",&rate);
printf("enter time(inyears):");
scanf("%f",&time);
simpleinterest=(principal*rate*time)/100;
printf("simple interest=%.2f\n",simpleinterest);
return 0;
}

