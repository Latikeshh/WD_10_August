#include <stdio.h>
int main() {
    int marks[3][3], i, j, total;
    printf("Enter marks of 3 students in 3 subjects:\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++) scanf("%d", &marks[i][j]);
    for(i = 0; i < 3; i++) {
        total = 0;
        for(j = 0; j < 3; j++) total += marks[i][j];
        printf("Student %d total = %d\n", i + 1, total);
    }
    return 0;
}
