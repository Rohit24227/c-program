#include <stdio.h>
int main() {
char ch;
printf("enter a character");
scanf("%c",&ch);
if(ch>='0'&&ch<='9'){
printf("'%c' is not a digit  .\n",ch);
}
return 0;
}
