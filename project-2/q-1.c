#include <stdio.h>
int main() {
    int n;
    printf("enter value:-");
    scanf("%d",&n);
    int i = 2;
    do {
        if (i % 2 == 0) {
            printf("%d ", i);
            i += 8;
        }
    } while (i <= n);
    return 0;
}