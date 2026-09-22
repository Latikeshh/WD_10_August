#include <stdio.h>
int main() {
    int marks[5][3], i, j, highest;
    printf("Enter marks of 5 students in 3 subjects:\n");
    for(i = 0; i < 5; i++)
        for(j = 0; j < 3; j++) scanf("%d", &marks[i][j]);
    for(j = 0; j < 3; j++) {
        highest = marks[0][j];
        for(i = 1; i < 5; i++)
            if(marks[i][j] > highest) highest = marks[i][j];
        printf("Highest marks in subject %d = %d\n", j + 1, highest);
    }
    return 0;
}
