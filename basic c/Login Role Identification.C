#include <stdio.h>
int main() {
    int role;
    scanf("%d", &role);
    switch (role) {
        case 1: printf("Admin"); break;
        case 2: printf("User"); break;
        case 3: printf("Guest"); break;
        default: printf("Invalid Role");
    }
    return 0;
}
