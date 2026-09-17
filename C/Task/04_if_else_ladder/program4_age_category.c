#include <stdio.h>
int main() {
    int age;
    scanf("%d", &age);
    if (age <= 12)
        printf("Child");
    else if (age <= 19)
        printf("Teenager");
    else if (age <= 59)
        printf("Adult");
    else
        printf("Senior Citizen");
    return 0;
}
