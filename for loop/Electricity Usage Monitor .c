#include <stdio.h>
int main() {
    //Your Code goes here!
    int N, unit, total = 0;
    scanf("%d",&N);
    for(int i = 0; i < N; i++){
        scanf("%d",&unit);
        total += unit;
    }
    printf("total units : %d", total);
    return 0;
}
