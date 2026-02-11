#include <stdio.h>
int main() {
    //Your Code goes here!
    int N, rain, total=0,heavy=0;
    scanf("%d",&N);
    for(int i=0;i < N; i++){
        scanf("%d",&rain);
        total += rain;
        if(rain > 50) heavy++;
    }
    printf("Total Rainfall: %d\n", total);
    printf("Heavy Rain Days: %d", heavy);
    return 0;
}


