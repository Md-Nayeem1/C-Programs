#include<stdio.h>
int main(){
    double r;
    for(;;){
    printf("Enter the radius: ");
    scanf("%lf",&r);
    printf("Area of the circle is: %lf\n",3.14159*r*r);
    printf("Circumference of the circle is: %lf\n\n",2*3.14159*r);
    }
    return 0;
}
