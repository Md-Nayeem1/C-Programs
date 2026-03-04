#include<stdio.h>
int main()
{
    int number,first,last,power=1,temp,digit=0;
    printf("Enter a number: ");
    scanf("%d",&number);
    temp=number;
    last=number%10;
    while(number!=0)
    {
        first=number%10;
        number=number/10;
        digit++;
    }
   for(int i=1;i<digit;i++){
    power=power*10;
   }
   temp=temp-(first*power);
   temp=temp-last;
   temp=temp+(last*power);
   temp=temp+first;
    printf("Number after swapping: %d",temp);
    return 0;
}
