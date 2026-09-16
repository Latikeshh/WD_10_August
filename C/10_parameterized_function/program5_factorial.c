#include <stdio.h>
void factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
    printf("Factorial = %d", fact);
}
int main() {
    factorial(5);
    return 0;
}
