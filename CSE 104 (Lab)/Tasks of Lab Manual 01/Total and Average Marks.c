#include<stdio.h>
int main(){
double e,b,m,s,h;
for(;;){
printf("Obtained marks in English: ");
scanf("%lf",&e);
printf("Obtained marks in Bangla: ");
scanf("%lf",&b);
printf("Obtained marks in Mathematics: ");
scanf("%lf",&m);
printf("Obtained marks in Science: ");
scanf("%lf",&s);
printf("Obtained marks in History: ");
scanf("%lf",&h);
printf("Total Mark is: %lf\nAverage Mark is: %lf\n\n",e+b+m+s+h,(e+b+m+s+h)/5);
}
return 0;
}
