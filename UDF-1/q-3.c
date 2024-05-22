#include <stdio.h>
sum (int a, int b){
int total = a / b ;
printf(" The Quotient is : %d",total);
}

void main(){
    int a,b;
    printf("Enter the value of Dividend : ");
    scanf("%d",&a);
    printf("Enter the value of Divisor : ");
    scanf("%d",&b);
    sum(a,b);
}
