
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    for(int i=0;i<n;i++){
        int flag=0;
        for(int j=0;j<i;j++){
            if(a[i]==a[j]){
                flag=1;
                break;
            }
        }
        if(!flag) printf("%d ",a[i]);
    }
    return 0;
}
