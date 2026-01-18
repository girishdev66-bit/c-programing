#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num >= 0 && num <= 9) {
        printf("Input: %d Output: Single Digit\n", num);
    } else {
        printf("Input: %d Output: Not Single Digit\n", num);
    }

    return 0;
}