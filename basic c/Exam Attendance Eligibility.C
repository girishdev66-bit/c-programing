#include <stdio.h>
int main() {
    int att;
    scanf("%d", &att);
    if (att >= 75)
        printf("Eligible for Exam");
    else
        printf("Not Eligible");
    return 0;
}
