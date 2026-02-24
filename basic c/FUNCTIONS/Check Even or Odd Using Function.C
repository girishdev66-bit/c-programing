#include <stdio.h>
char* checkEvenOdd(int n) {
    if (n % 2 == 0) return "Even";
    else return "Odd";
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%s", checkEvenOdd(n));
    return 0;
}
