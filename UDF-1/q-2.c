#include <stdio.h>
sum (int a, int b){
int total = a*b ;
printf("%d",total);
}

void main(){
    int a,b;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    sum(a,b);
}
