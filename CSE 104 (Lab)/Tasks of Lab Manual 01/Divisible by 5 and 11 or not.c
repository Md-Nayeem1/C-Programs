#include<stdio.h>
int main(){
    int num;
    for(;;){
    printf("Enter your number: ");
    scanf("%d",&num);
    if((num%5==0) && (num%11==0)){
        printf("Yes\n");
    }
    else{
            printf("No\n");
    }
    }
return 0;
}
