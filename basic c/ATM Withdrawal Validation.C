#include <stdio.h>
int main() {
    int amt;
    scanf("%d", &amt);
    if (amt % 100 == 0)
        printf("Valid Amount");
    else
        printf("Invalid Amount");
    return 0;
}
