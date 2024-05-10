#include<stdio.h>
int main(){
    for (int row = 1; row <= 5; row++){
        for (int col = 1; col <= 5; col++)
        {
            if (5 - row >= col){
                printf("  ");
            }
            else
            {
                printf(" %d", col);
            }            
        }
        printf("\n");       
    }
        return 0;
}