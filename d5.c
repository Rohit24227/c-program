#include <stdio.h>
int main() {
int number;
printf("enter a number");
scanf("%d",&number);
if(number%2==0){
printf("the number is even.\n");
}else{
printf("the number is odd.\n");
}
return 0;
}
