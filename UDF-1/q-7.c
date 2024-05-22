#include<stdio.h>
int count(){
   for (int i = 1; i <= 10; i++){
        printf("%d\n", count(i));
}
void main(){
    count();
}