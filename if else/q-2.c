#include <stdio.h>
int main (){
    int a;
    printf("Enter the value of first number : ");
    scanf("%d\n",&a);
    if (a==0){
        printf("This number is Neutral: ");

    } else if (a>0){
        printf("This number is Positive:");

    }else{
        printf("This number is Negative:");
        
    }

}