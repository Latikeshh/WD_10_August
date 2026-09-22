#include <stdio.h>
int main() {
    int roll[5], i;
    printf("Enter roll numbers of 5 students:\n");
    for(i = 0; i < 5; i++) scanf("%d", &roll[i]);
    printf("\nRoll Numbers:\n");
    for(i = 0; i < 5; i++) printf("Student %d = %d\n", i + 1, roll[i]);
    return 0;
}
