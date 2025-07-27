#include <stdio.h>
int main() {
int num1, num2;
printf("enter two numbers");
scanf("%d %d",&num1,num2);
if (num1>num2)
printf("the largest number is",num1);
else if(num2>num1)
printf("the largest number is",num2);
else
printf("the both numbers are equal");
return 0;
}
