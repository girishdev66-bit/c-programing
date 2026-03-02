#include <stdio.h>
#include <math.h>

char* isArmstrong(int n) {
    int original = n, sum = 0, digits = 0, temp = n;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp > 0) {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }

    if (sum == original)
        return "Armstrong";
    else
        return "Not Armstrong";
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%s", isArmstrong(n));
    return 0;
}
