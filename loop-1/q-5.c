#include<stdio.h>
int main(){
    int i,n;
    printf("Enyter your first numbers :");
    scanf("%d",&i);
     printf("Enyter your first numbers :");
    scanf("%d",&n);
    
    while(i <= 2040){
       if(i%4==0){
        printf("%d\n",i);
       }
       i++; 
    }
}