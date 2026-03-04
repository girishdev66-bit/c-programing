#include<stdio.h>

int main()
{
    int r,c,i,j,a[100][100],index=-1;

    scanf("%d %d",&r,&c);

    int minSum=0;

    for(i=0;i<r;i++)
    {
        int sum=0;

        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }

        if(sum!=0 && (index==-1 || sum<minSum))
        {
            minSum=sum;
            index=i;
        }
    }

    printf("%d",index);

    return 0;
}
