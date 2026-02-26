#include<stdio.h>
int main(){
double cm;
for(;;){
printf("Enter the length in cm: ");
scanf("%lf",&cm);
printf("Length in meter: %lf\n",cm/100.0);
printf("Length in kilometer: %lf\n\n",cm/100000.0);

}
return 0;
}
