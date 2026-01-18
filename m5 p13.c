#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Output: Eligible\n");
    } else {
        printf("Output: Not Eligible\n");
    }

    return 0;
}