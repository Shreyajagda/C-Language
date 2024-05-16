#include<stdio.h>
int main(){

    int size_of_row , size_of_col ;

    printf("Enter Size Of Row : - ");
    scanf("%d",&size_of_row);

    printf("Enter Size Of Col : - ");
    scanf("%d",&size_of_col);

    int array [size_of_row] [size_of_col] , count = 0;
    float sum = 0 , average = 0;
    for(int row = 0; row < size_of_row; row++){
        for(int col = 0; col < size_of_col; col++){
            printf("Enter Elemant [%d] [%d]:-",row,col);
            scanf("%d",&array[row][col]);
        }
        printf("\n");
}    for(int row = 0; row < size_of_row; row++){
        for(int col = 0; col < size_of_col; col++){
            count++;
            sum = sum + array[row][col];
            average = sum / count;
           
        }
}
printf("Average of an Array : - %f",average);

    return 0;
}