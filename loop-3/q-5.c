#include<stdio.h>
int main(){

    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        sum += i;

        if (sum > 50)
        {
            sum -= i;
            break;
        }

    }
    printf("Sum : %d",sum);

    return 0;
}