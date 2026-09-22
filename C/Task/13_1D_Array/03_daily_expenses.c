#include <stdio.h>
int main() {
    int expense[5], i, total = 0;
    printf("Enter expenses for 5 days:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &expense[i]);
        total += expense[i];
    }
    printf("Total expense = %d", total);
    return 0;
}
