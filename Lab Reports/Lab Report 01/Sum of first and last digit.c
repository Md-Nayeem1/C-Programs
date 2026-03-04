#include<stdio.h>
int main()
{
    int number,first,last,sum=0;
    printf("Enter a number: ");
    scanf("%d",&number);

    last=number%10;
    while(number!=0)
    {
        first=number%10;
        number=number/10;
    }
    sum=first+last;
    printf("Sum of first and last digit: %d",sum);
    return 0;
}
