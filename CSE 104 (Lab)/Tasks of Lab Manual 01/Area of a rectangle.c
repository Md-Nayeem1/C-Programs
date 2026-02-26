#include<stdio.h>
int main(){
double h,w;
for(;;){
printf("Enter the height of rectangle: ");
scanf("%lf",&h);
printf("Enter the width of rectangle: ");
scanf("%lf",&w);
printf("Area of the rectangle is: %lf\n\n",h*w);
}
return 0;
}
