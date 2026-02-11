#include <stdio.h>
int main() {
    //Your Code goes here!
    int battery, N, drain;
    scanf("%d",&battery, &N);
    for(int i = 0; i < N; i++){
        scanf("%d",&drain);
        battery -= drain;
    } 
    printf("Remaining Battery: %d%%", battery);
    return 0;
}

