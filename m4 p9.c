#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n & (1 << 31))
        printf("set");
    else
        printf("Not set");
    
    return 0;
}