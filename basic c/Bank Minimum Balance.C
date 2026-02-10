#include <stdio.h>
int main() {
    int bal;
    scanf("%d", &bal);
    if (bal < 1000)
        printf("Low Balance");
    else
        printf("Sufficient Balance");
    return 0;
}
