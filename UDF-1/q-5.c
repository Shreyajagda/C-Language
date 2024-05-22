#include<stdio.h>

void square (int n);
int main(){
    int n;

    printf("Enter number : ");
    scanf("%d",&n);

   square(n);

    return 0;
}

void square(int n){
    int square = n * n ;
    printf("The cube of %d : %d", n, square);
}