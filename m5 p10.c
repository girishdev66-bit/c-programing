#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);
    if (marks < 0 || marks > 100) {
        printf("Invalid marks entered.\\n");
    }
    else if (marks >= 80) {
        printf("Output: Grade A\\n");
    }
    else if (marks >= 60) {
        printf("Output: Grade B\\n");
    }
    else if (marks >= 40) {
        printf("Output: Grade C\\n");
    }
    else {
        printf("Output: Grade F\\n");
    }

    return 0;
}