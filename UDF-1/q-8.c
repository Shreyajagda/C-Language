#include<stdio.h>

void printTable();
int main(){
    printTable();
}

void printTable(){
    for (int i = 1; i <= 10; i++){
        printf("5 * %d = %d\n", i, 4*i);
    }
}