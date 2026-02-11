#include <stdio.h>
int main() {
    //Your Code goes here!
    int N, mark, total=0, fail=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&mark);
        total += mark;
        if(mark < 40) fail++;
    }
    printf("Average Score: %d\n", total/N);
    printf("Failed Subjects: %d", fail);
}
