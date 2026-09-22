#include <stdio.h>
int main() {
    int roll[6], search, i, found = 0;
    printf("Enter 6 roll numbers:\n");
    for(i = 0; i < 6; i++) scanf("%d", &roll[i]);
    printf("Enter roll number to search: ");
    scanf("%d", &search);
    for(i = 0; i < 6; i++) {
        if(roll[i] == search) {
            printf("Roll number found at position %d", i + 1);
            found = 1;
            break;
        }
    }
    if(!found) printf("Roll number not found.");
    return 0;
}
