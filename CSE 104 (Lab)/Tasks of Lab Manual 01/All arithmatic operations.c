#include<stdio.h>
int main()
{
    double a,b;
    char opr;
    printf("~Nayeem's Smart Calculator~\n");
    for(;;)
    {
        printf("Enter a number: ");
        scanf("%lf",&a);
        printf("Choose an operator(+,-,/,*): ");
        scanf(" %c",&opr);
        printf("Enter another number: ");
        scanf("%lf",&b);

        if(opr=='+'){
            printf("Summation is: %lf\n",a+b);
        }
        else if(opr=='-'){
            printf("Subtraction is: %lf\n",a-b);
        }
        else if(opr=='*'){
            printf("Product is: %lf\n",a*b);
        }
        else if(opr=='/'){
            printf("Division is: %lf\n",a/b);
        }
        else{
            printf("Invalid Input\n");
        }

    }
return 0;
}
