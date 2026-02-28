#include <stdio.h>
char* leapYear(int y) {
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        return "Leap Year";
    else
        return "Not Leap Year";
}
int main() {
    int y;
    scanf("%d", &y);
    printf("%s", leapYear(y));
    return 0;
}
