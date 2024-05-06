#include <stdio.h>
main(){
    int count=0;
    for (int i=1; i<=20; i++){
        if(i % 2 == 0){
            printf("%d\n",i);
            count++;
            if(count==10){
                break;
            }
        }
    }
}