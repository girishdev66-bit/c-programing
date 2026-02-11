#include <stdio.h>
int main() {
    //Your Code goes here!
    int N, v, min=1000, low=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&v);
        if(v < min)min = v;
        if(v < 210)low++;
    }
    printf("Minimum Voltage: %d \n", min);
    printf("Low Voltage Events: %d", low);
    return 0;
}

