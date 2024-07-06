#include<stdio.h>
int main(){

    int row , col , count = 11;
    
    for(row = 11; row <= 15; row++){
        for(col = 11; col <= row; col++){
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
    return 0;
}