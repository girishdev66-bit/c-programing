#include <stdio.h>

int powerRec(int a, int b) {
    if (b == 0)
        return 1;
    return a * powerRec(a, b - 1);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", powerRec(a, b));
    return 0;
}
