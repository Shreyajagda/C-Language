#include <stdio.h>
int main(){
    int i = 0,sum;

    do{
        if(i % 2 == 0){
            printf("%d\n", i += 2);
        }
    } while (i <= 6);
}