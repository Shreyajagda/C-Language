
#include <stdio.h>
struct student {
    char firstName[50];
    int roll;
    float marks;
} s[5];
int main() {
    int i;
    printf("Enter information of book :\n");
    for (i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
       
        printf("Enter book title :");
        scanf("%s", s[i].firstName);
        printf("Enter author's Name : ");
        scanf("%f", &s[i].marks);
    }
    return 0;
}