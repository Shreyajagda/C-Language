#include<stdio.h>

int calculateSumOfSquares(int number);
int main(){

    int number, sum;

    printf("Enter a number : ");
    scanf("%d",&number);

    sum = calculateSumOfSquares(number);

    printf("The sum of squares of all even numbers from 1 to %d : %d\n", number, sum);
    return 0;
}

int calculateSumOfSquares(int number){
    int sum = 0;
    for(int i = 1; i <= number; i++){
        if(i % 2 == 0){
            sum += i * i;
        }
    }

    return sum;
}
