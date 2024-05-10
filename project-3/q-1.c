#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 41; i <= rows; i++) {
      for (j = 41; j <= i; j++) {
         printf("%d ", j);
      }
      printf("\n");
   }
}