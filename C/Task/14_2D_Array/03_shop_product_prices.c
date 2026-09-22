#include <stdio.h>
int main() {
    int price[2][4], i, j;
    printf("Enter prices of 4 products in 2 shops:\n");
    for(i = 0; i < 2; i++) {
        printf("Shop %d:\n", i + 1);
        for(j = 0; j < 4; j++) scanf("%d", &price[i][j]);
    }
    printf("\nPrice List:\n");
    for(i = 0; i < 2; i++) {
        printf("Shop %d: ", i + 1);
        for(j = 0; j < 4; j++) printf("%d ", price[i][j]);
        printf("\n");
    }
    return 0;
}
