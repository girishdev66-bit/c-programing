#include <stdio.h>
#include <limits.h>

int main(){
    int R,C;
    scanf("%d%d",&R,&C);
    int a[R][C];
    int minIndex=0;
    int minSum=INT_MAX;

    for(int i=0;i<R;i++){
        int sum=0;
        for(int j=0;j<C;j++){
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }
        if(sum<minSum){
            minSum=sum;
            minIndex=i;
        }
    }
    printf("%d",minIndex);
    return 0;
}
