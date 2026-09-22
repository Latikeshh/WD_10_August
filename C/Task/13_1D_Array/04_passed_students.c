#include <stdio.h>
int main() {
    int marks[6], i, pass = 0;
    printf("Enter marks of 6 students:\n");
    for(i = 0; i < 6; i++) {
        scanf("%d", &marks[i]);
        if(marks[i] >= 40) pass++;
    }
    printf("Number of passed students = %d", pass);
    return 0;
}
