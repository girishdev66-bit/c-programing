#include <stdio.h>
int main() {
    //Your Code goes here!
    int Salary, absent;
    scanf("%d",&Salary, &absent);
    for(int i = 0; i < absent; i++){
        Salary -= 100;
    }
    printf("Final Salary: $%d", Salary);
    return 0;
}
