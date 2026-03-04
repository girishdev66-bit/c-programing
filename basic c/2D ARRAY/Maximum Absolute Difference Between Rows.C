#include<stdio.h>

int main()
{
    int r,c,i,j,a[100][100];

    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    int maxDiff=0;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            for(int x=i+1;x<r;x++)
            {
                for(int y=0;y<c;y++)
                {
                    int diff=a[i][j]-a[x][y];
                    if(diff<0)
                        diff=-diff;

                    if(diff>maxDiff)
                        maxDiff=diff;
                }
            }
        }
    }

    printf("%d",maxDiff);

    return 0;
}
