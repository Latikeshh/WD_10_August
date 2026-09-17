#include <stdio.h>
int main() {
    int age, citizen;
    scanf("%d%d", &age, &citizen);
    if (citizen == 1) {
        if (age >= 18)
            printf("Eligible for voting");
    }
    return 0;
}
