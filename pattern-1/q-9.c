#include<stdio.h>
int main(){
    int ascii = 70;
    for (char row = 65; row <= 70; row++)
    {
        for (int col = ascii--; col >= 65; col--)
        {
            printf("%c ",col);
        }
        printf("\n");
    }
}