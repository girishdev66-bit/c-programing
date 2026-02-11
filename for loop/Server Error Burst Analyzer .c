#include <stdio.h>
int main(){
    //Your Code goes here!
    int N, err, total=0, critical=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&err);
        total += err;
        if(err > 50) critical++;
    }
    printf("Total Errors: %d\n", total);
    printf("Critical Hours: %d", critical);
}
