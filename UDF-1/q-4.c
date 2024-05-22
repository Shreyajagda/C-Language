#include<stdio.h>

void number(int n);
int main(){
    int n;

    printf("Enter first number : ");
    scanf("%d",&n);

    numbers(n);

    return 0;
}

void numbers(int n){
    int cube = n * n * n;
    printf("The cube of %d : %d", n, cube);
}