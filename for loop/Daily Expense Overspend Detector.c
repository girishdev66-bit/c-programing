#include <stdio.h>
int main() {
    //Your Code goes here!
    int N, expense, total = 0, overspend = 0;
    scanf("%d",&N);
    for(int i=0; i<N; i++){
        scanf("%d",&expense);
        total += expense;
        if(expense > 1000)overspend++;
    }
    printf("Total Expense: %d \n", total);
    printf("Overspend Days: %d", overspend);
    return 0;
}
