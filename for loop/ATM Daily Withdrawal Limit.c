#include <stdio.h>
int main() {
    //Your Code goes here!
    int N,sum = 0;
    scanf("%d",&N);
    for(int i = 1; i <= N; i++)
    sum+=i;
    printf("%d",sum);
    return 0;
}
