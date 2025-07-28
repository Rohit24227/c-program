#include<stdio.h>
#define pi 3.14159
int main(){
float radius,circumferences;
printf("enter the radius of the circle");
scanf("%f",&radius);
circumferences=2*pi*radius;
printf("circumferences of the circle=%.2f\n",circumferences);
return 0;
}
