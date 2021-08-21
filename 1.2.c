#include <stdio.h>
int main()
{
int num1, num2;
char sym;
printf("choice(+, -, *, /) : ");
scanf("%c",&sym);-
printf("num1 = ");
scanf("%d", &num1);
printf("num2 = ");
scanf("%d", &num2);

switch(sym){
  case '+' :
    printf("Result = %d\n",num1+num2);
   break;
  case '-' :
    printf("Result = %d\n",num1-num2);
   break;
  case '*' :
    printf("Result = %d\n",num1*num2);
   break;
  case '/' :
   printf("Result = %d\n",num1/num2);
   break;

 default : printf("Error!\n");
 }
}

