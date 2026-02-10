#include <stdio.h>
int main() {
    int choice, a, b;
    scanf("%d %d %d", &choice, &a, &b);
    switch (choice) {
        case 1: printf("Sum = %d", a + b); break;
        case 2: printf("Difference = %d", a - b); break;
        case 3: printf("Product = %d", a * b); break;
        case 4: printf("Quotient = %d", a / b); break;
        default: printf("Invalid choice");
    }
    return 0;
}
