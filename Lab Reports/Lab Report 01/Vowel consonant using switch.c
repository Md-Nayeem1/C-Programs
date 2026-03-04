#include<stdio.h>
int main(){
    char a;
    printf("Enter an alphabet: ");
    scanf("%c",&a);

    switch(a){

    case 'a':
    printf("%c is a vowel.",a);
    break;
    case 'e':
    printf("%c is a vowel.",a);
    break;
    case 'i':
    printf("%c is a vowel.",a);
    break;
    case 'o':
    printf("%c is a vowel.",a);
    break;
    case 'u':
    printf("%c is a vowel.",a);
    break;
    default:
        if(a=='0' || a=='1' || a=='2'||a=='3' || a=='4' || a=='5'||a=='6' || a=='7' || a=='8'||a=='9'){
            printf("%c is a number.",a);
        }
        else
        printf("%c is a consonant.",a);
    }
return 0;
}




//Same Logic using if else condition:

/*#include<stdio.h>
int main(){
    char a;
    printf("Enter an alphabet: ");
    scanf("%c",&a);
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
            printf("%c is a vowel.",a);
    }
    else
        printf("%c is a consonant.",a);
return 0;
}
*/
