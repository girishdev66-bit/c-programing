#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Entered character %c is an alphabet.\n", ch);
    } else {
        printf("Entered character %c is not an alphabet.\n", ch);
    }

    return 0;
}