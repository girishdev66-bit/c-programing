#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (isupper(ch)) {
        printf("Output: Uppercase\n");
    } else if (islower(ch)) {
        printf("Output: Lowercase\n");
    } else {
        printf("Output: Not an alphabet\n");
    }

    return 0;
}