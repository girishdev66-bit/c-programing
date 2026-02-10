#include <stdio.h>
int main() {
    int len;
    scanf("%d", &len);
    if (len > 5)
        printf("Valid Email");
    else
        printf("Invalid Email");
    return 0;
}
