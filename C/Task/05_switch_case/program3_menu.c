#include <stdio.h>
int main() {
    int choice;
    scanf("%d", &choice);
    switch(choice) {
        case 1: printf("Pizza"); 
        break;
        case 2: printf("Burger"); 
        break;
        case 3: printf("Pasta"); 
        break;
        case 4: printf("Sandwich"); 
        break;
        default: printf("Invalid choice");
    }
    return 0;
}
