#include <stdio.h> 
int func(int aa[], int size); 
int main() { 
    int a[5] = {1, 2, 3, 4, 7}; 
    int size = (sizeof(a) / sizeof(a[0])); 
    int r = func(a, size); 
    printf("%d", r); 
    return 0; 
} 
int func(int aa[], int size) { 
    int sum = 0; 
    for (int i = 0; i < size; i++) 
    { 
        sum += aa[i]; 
    } 
    return sum; 
} 