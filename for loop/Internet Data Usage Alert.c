#include <stdio.h>
int main() {
    //Your Code goes here!
    int N, p, total=0, over=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&p);
        total += p;
        if(p > 100) over++;
    }
    printf("Total Patients: %d\n", total);
    printf("Overcrowded Days: %d", over);
}
