#include<stdio.h>
int main(){

    int shr;
    printf("Enter Size of array:-");
    scanf("%d",&shr);

    char array[shr];
    for(int index = 0; index < shr; index++){
        printf("Enter a Element : -");
        scanf(" %c",&array[index]);
    }for(int index = 0; index < shr; index++){
            printf("%c\n",array[index]);
       
    }
    return 0;
}