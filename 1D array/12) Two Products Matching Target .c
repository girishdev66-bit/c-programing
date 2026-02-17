
#include<stdio.h>
int main(){
    int n,target,found=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&target);

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==target){
                printf("%d %d",a[i],a[j]);
                found=1;
                break;
            }
        }
        if(found) break;
    }

    if(!found) printf("No pair");
    return 0;
}
