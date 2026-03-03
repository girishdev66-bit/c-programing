#include <stdio.h>
#include <limits.h>

int main(){
    int R,C;
    scanf("%d%d",&R,&C);
    int a[R][C];
    long long maxProd=LLONG_MIN;
    int index=0;

    for(int i=0;i<R;i++){
        long long prod=1;
        for(int j=0;j<C;j++){
            scanf("%d",&a[i][j]);
            prod*=a[i][j];
        }
        if(prod>maxProd){
            maxProd=prod;
            index=i;
        }
    }

    printf("%d",index);
    return 0;
}
