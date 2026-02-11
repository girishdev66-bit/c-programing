#include <stdio.h>
int main() {
    //Your Code goes here!
    int N, data, total=0, high=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&data);
        total += data;
        if(data > 2) high++;
    }
    printf("Total Data: %d\n", total);
    printf("High Usage Days: %d", high);
}
