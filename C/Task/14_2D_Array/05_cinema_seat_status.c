#include <stdio.h>
int main() {
    int seats[4][5], i, j;
    printf("Enter seat status (1 = Booked, 0 = Available):\n");
    for(i = 0; i < 4; i++)
        for(j = 0; j < 5; j++) scanf("%d", &seats[i][j]);
    printf("\nCinema Seats:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 5; j++)
            printf("%s ", seats[i][j] ? "B" : "A");
        printf("\n");
    }
    return 0;
}
