#include <stdio.h>
int main() {
    int len;
    scanf("%d", &len);
    if (len >= 8)
        printf("Strong Password");
    else
        printf("Weak Password");
    return 0;
}
