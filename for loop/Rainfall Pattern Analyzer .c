#include <stdio.h>
int main() {
    //Your Code goes here!
    int N, loss, total = 0, high = 0;
    scanf("%d",&N);
    for(int i = 0; i < N; i++){
        scanf("%d",&loss);
        total += loss;
        if(loss > 100) high++;
    }
    printf("Total Loss: %d \n", total);
    printf("Total Loss: %d \n", high);
     return 0;
}
