#include <stdio.h>
int check(int n) {
    if(n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}
int main() {
    check(10);
    return 0;
}
