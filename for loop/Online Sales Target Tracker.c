#include <stdio.h>
int main() {
    //Your Code goes here!
    int N, rev, total=0, target=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&rev);
        total += rev;
        if(rev > 50000) target++;
    }
    printf("Total Revenue: %d\n", total);
    printf("Target Days: %d", target);
}
