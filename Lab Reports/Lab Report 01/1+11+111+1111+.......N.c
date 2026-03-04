#include<stdio.h>
int main()
{
    int n,term=0,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        term=term*10+1;
        sum=sum+term;
    }
    printf("Sum of series: %d",sum);
    return 0;
}
