#include <stdio.h>
int main() {
    int marks, age;
    scanf("%d%d", &marks, &age);
    if (marks >= 60) {
        if (age >= 18)
            printf("Admission allowed");
    }
    return 0;
}
