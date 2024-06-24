#include<stdio.h>
int main(){
   int i = 1;
   
    do{
        if(i % 2 == 0){
           printf("%d\n",i);
           i += 7;
        }else{
            i++;
        }
    } while (i <= 50); 
    return 0;
}