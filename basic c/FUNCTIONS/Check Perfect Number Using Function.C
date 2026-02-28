#include <stdio.h>
char* isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            sum += i;
    }
    if (sum == n)
        return "Perfect Number";
    else
        return "Not Perfect Number";
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%s", isPerfect(n));
    return 0;
}
