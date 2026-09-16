#include <stdio.h>
int main() {
    int temp;
    scanf("%d", &temp);
    if (temp >= 35)
        printf("Very Hot");
    else if (temp >= 25)
        printf("Hot");
    else if (temp >= 15)
        printf("Normal");
    else
        printf("Cold");
    return 0;
}
