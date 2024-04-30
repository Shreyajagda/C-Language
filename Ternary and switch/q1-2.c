#include<stdio.h>
main (){
    int a;
    int b;
    int c;

    printf("Enter your first number :");
    scanf("%d",&a);
     printf("Enter your second number :");
    scanf("%d",&b);
     printf("Enter your third number :");
    scanf("%d",&c);

    (a>b) ? 
    (a>c) ? printf("A is Min") : printf("C is Min")
    :
    (b>c) ? printf("B is Min") : printf("C is Min");

}