#include<stdio.h>

int main()
{
    int r,c,i,j,a[100][100];

    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    int maxSum=0,index=0;

    for(j=0;j<c;j++)
    {
        int sum=0;

        for(i=0;i<r;i++)
            sum+=a[i][j];

        if(j==0 || sum>maxSum)
        {
            maxSum=sum;
            index=j;
        }
    }

    printf("%d",index);

    return 0;
}
