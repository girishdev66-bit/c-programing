#include <stdio.h>
char* isPrime(int n) {
    if (n < 2) return "Not Prime";
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return "Not Prime";
    }
    return "Prime";
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%s", isPrime(n));
    return 0;
}
