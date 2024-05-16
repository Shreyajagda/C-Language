#include<stdio.h>
int main(){
    int size;

    printf("Enter the size of an Array : ");
    scanf("%d",&size);

    int arr[size];

    for(int i = 0; i < size; i++){
        printf("Enter the value of arr[%d] : ", i);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < size; i++){
        if(arr[i] < 0){
            printf(" The Negative Value are : %d\n",arr[i]);
        }
    }
        return 0;
}