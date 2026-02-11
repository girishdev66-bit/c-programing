#include <stdio.h>
int main() {
    //Your Code goes here!
    int N, price, max=0, high=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&price);
        if(price > max) max = price;
        if(price > 100) high++;
    }
    printf("Highest Price: %d\n", max);
    printf("High Price Days: %d", high);
}
