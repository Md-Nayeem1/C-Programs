#include<stdio.h>
int main(){
double num1,num2,sum,sub,mul,div;
char opr;
printf("~Nayeem's Smart Calculator~\n");
for(;;){
printf("Enter a number: ");
scanf("%lf",&num1);
printf("Choose an operator(+,-,/,*): ");
scanf(" %c",&opr);
printf("Enter another number: ");
scanf("%lf",&num2);
switch(opr){
case'+': sum=num1+num2;
printf("Summation is: %lf\n",sum);
break;
case'-': sub=num1-num2;
printf("Subtraction is: %lf\n",sub);
break;
case'*': mul=num1*num2;
printf("Product is: %lf\n",mul);
break;
case'/': div=num1/num2;
printf("Division is: %lf\n",div);
break;
default: printf("Invalid input.\n");
break;
}
}
return 0;
}
