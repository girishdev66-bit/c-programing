#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n >= 10 && n <= 20)
        printf("Number is within range");
    else
        printf("Number is out of range");
    return 0;
}
