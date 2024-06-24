#include<stdio.h>
int main(){
    int number , first_number , last_number , sum;

    printf("enter a number:-");
    scanf("%d",&number);

    first_number = number % 10 ;

    while(number>10){
        number =  number / 10 ;
    }

    last_number = number;

    sum = first_number + last_number;

    printf("The sum of the first and the last digit:%d", sum);

    return 0;
}