#include <stdio.h>

int main() {
    int w;
    for(;;){

    printf("Enter week number (1-7): ");
    scanf("%d", &w);

    if(w==1) {
            printf("Sunday\n");
    }
    else if(w==2){
            printf("Monday\n");
    }
    else if(w==3){
            printf("Tuesday\n");
    }
    else if(w==4){
            printf("Wednesday\n");
    }
    else if(w==5){
            printf("Thursday\n");
    }
    else if(w==6){
            printf("Friday\n");
    }
    else if(w==7){
            printf("Saturday\n");
    }
    else{
            printf("Invalid week number! Please enter 1 to 7.\n");
    }
    }

    return 0;
}
