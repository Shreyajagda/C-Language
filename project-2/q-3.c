#include <stdio.h>
int main() {
    int n, sum=0 , firstdigit, lastdigit;
    printf("Enter the first and last digit : ");
    scanf("%d",&n);
    lastdigit = n% 10;
    while (n>=10){
        n = n /10;
        
    } firstdigit = n;
    sum = firstdigit + lastdigit ;
    printf(" The sum of first and last number is : %d", sum);
}