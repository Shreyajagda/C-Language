#include<stdio.h>

int main(){

    int shr;
    printf("Enter Size of array:-");
    scanf("%d",&shr);

    char array[shr];
    for(int index = 0; index < shr; index++){
        printf("Enter a Element : -");
        scanf(" %c",&array[index]);

    }

    for(int index = 0; index < shr; index++)
    {
        if( array[index] == 'a'|| array[index] == 'e'|| array[index] == 'i'|| array[index] == 'o' || array[index] == 'u'){
            printf("%c",array[index]);
        }
    }
    return 0;
}