#include <stdio.h> 
 
struct Employee { 
    int id; 
    char name[50]; 
    char post[50]; 
}; 
 
int main() { 
    FILE *file; 
    struct Employee emp; 
 
    file = fopen("emp.txt", "w"); 
 
    if (file == NULL) { 
        printf("Error opening file!"); 
        return 1; 
    } 
 
    printf("Enter employee ID, name, and post:\n"); 
    scanf("%d %s %s", &emp.id, emp.name, emp.post); 
 
    fprintf(file, "%d %s %s\n", emp.id, emp.name, emp.post); 
 
    fclose(file); 
 
    file = fopen("employee.txt", "r"); 
 
    if (file == NULL) { 
        printf("Error opening file!"); 
        return 1; 
    } 
 
    printf("Records in emp.txt:\n"); 
    while (fscanf(file, "%d %s %s", &emp.id, emp.name, emp.post) != EOF) { 
        printf("ID: %d, Name: %s, Post: %s\n", emp.id, emp.name, emp.post); 
    } 
 
    fclose(file); 
 
    return 0; 
} 