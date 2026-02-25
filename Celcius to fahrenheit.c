#include<stdio.h>
int main(){
double c;
for(;;){
printf("Temperature in Celcius: ");
scanf("%lf",&c);
printf("Temperature in Fahrenheit: %lf\n\n",((9/5.0)*c)+32);
}
return 0;
}
