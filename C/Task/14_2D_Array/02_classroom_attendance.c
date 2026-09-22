#include <stdio.h>
int main() {
    int attendance[4][5], i, j;
    printf("Enter attendance (1 = Present, 0 = Absent):\n");
    for(i = 0; i < 4; i++) {
        printf("Student %d:\n", i + 1);
        for(j = 0; j < 5; j++) scanf("%d", &attendance[i][j]);
    }
    for(i = 0; i < 4; i++) {
        int present = 0;
        for(j = 0; j < 5; j++)
            if(attendance[i][j] == 1) present++;
        printf("Student %d attended %d days\n", i + 1, present);
    }
    return 0;
}
