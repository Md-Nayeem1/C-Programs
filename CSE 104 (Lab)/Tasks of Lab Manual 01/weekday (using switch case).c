#include <stdio.h>

int main() {
    int week;
    for(;;){

    printf("Enter week number (1-7): ");
    scanf("%d", &week);

    switch (week) {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid week number! Please enter 1 to 7.\n");
    }
    }

    return 0;
}
