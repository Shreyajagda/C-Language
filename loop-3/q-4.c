#include <stdio.h>
main(){
    for (int i=1; i<=30; i++){
        if(i == 14){
            continue;
        }
        if(i % 2 == 0){
            printf("%d\n",i);
        }
    }
}