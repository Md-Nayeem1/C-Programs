#include<stdio.h>
int main(){
double f;
for(;;){
printf("Temperature in Fahrenheit: ");
scanf("%lf",&f);
printf("Temperature in Celcius: %lf\n\n",(f-32)*5/9.0);
}
return 0;
}
