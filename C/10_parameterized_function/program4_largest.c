#include <stdio.h>
void largest(int a, int b) {
    if(a > b)
        printf("%d is largest", a);
    else
        printf("%d is largest", b);
}
int main() {
    largest(20, 15);
    return 0;
}
