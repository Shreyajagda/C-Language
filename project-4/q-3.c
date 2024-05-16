#include<stdio.h>
int main(){
    int rowA, colB;

    printf("Enter the size of a Row : ");
    scanf("%d", &rowA);

    printf("Enter the size of a Column : ");
    scanf("%d", &colB);

    int number[rowA][colB];

    for (int row = 0; row < rowA; row++){
        for (int col = 0; col < colB; col++){
            printf("Enter the value of number[%d][%d] : ", row, col);
            scanf("%d",&number[row][col]); 
        }
        printf("\n");
    }

    int max = number[0][0];

    for (int col = 0; col < colB; col++){
        for (int row = 0; row < rowA; row++){
            printf("%-6d", number[row][col]);
        }
        printf("\n");
    }

    printf("The largest number in this 2D-array is : %d", max);

    return 0;
}
 