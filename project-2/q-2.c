#include<stdio.h>
int main(){
    int number;
    int digit = 0;
    printf("enter a number:-");
    scanf("%d",&number);
    while (number>=1){
       number /= 10;
       digit++;     }
    printf("Total number of digit:%d",digit);
    return 0;
}