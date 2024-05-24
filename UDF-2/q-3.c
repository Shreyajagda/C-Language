#include <stdio.h>

int multiply (int n){
    if (n>=1)
    return n * multiply (n-1);
    else 
    return 1;
}

int main (){
    int n ; 
    printf("Enter the factorial : ");
    scanf("%d",&n);
    printf("The factorial of %d = %ld ", n , multiply(n));
    return 0;
}