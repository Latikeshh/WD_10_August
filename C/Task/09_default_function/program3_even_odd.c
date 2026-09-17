#include <stdio.h>
int checkEven() {
    int n = 10;
    if(n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}
int main() {
    checkEven();
    return 0;
}
