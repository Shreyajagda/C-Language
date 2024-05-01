#include <stdio.h>
int main() {
    int num;
    printf("enter your Number :");
    scanf("%d",&num);
    int i=num;
    printf("--- Odd Number is ---");
    while(i>=0)
    {
        if(i%2!=0)
        {
            printf("\n%d",i);
        }
        i--;
    }
}