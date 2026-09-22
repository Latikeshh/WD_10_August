#include <stdio.h>
int main() {
    int marks[5], i, highest;
    printf("Enter marks of 5 students:\n");
    for(i = 0; i < 5; i++) scanf("%d", &marks[i]);
    highest = marks[0];
    for(i = 1; i < 5; i++)
        if(marks[i] > highest) highest = marks[i];
    printf("Highest marks = %d", highest);
    return 0;
}
