#include <stdio.h>
int main() {
int num;
printf("enter a number");
scanf("%d",&num);
if (num%5==0||num%11==0){
printf("%d is divisible  by 5 or 11.\n",num);
}else{
printf("%d is not divisible by 5 or 11.\n",num);
}
return 0;
}
