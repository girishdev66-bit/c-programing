#include<stdio.h>

int main()
{
    int r,c,i,j,a[100][100];

    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            int count=0;

            for(int x=0;x<r;x++)
                for(int y=0;y<c;y++)
                    if(a[i][j]==a[x][y])
                        count++;

            if(count==1)
            {
                printf("%d",a[i][j]);
                return 0;
            }
        }
    }

    return 0;
}
