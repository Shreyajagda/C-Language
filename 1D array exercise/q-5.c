#include <stdio.h>
int main(){

    int shr;
    printf("Enter Size of Array:-");
    scanf("%d", &shr);

    int array[shr], sum = 0, average;
    for (int index = 0; index < shr; index++)
    {
        printf("Enter a Elemant:-");
        scanf("%d", &array[index]);
    }
    for (int index = 0; index < shr; index++)
    {
        sum = sum + array[index];
        
    }
    printf("%d", sum);

    return 0;
}