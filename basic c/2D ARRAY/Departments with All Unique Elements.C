#include<stdio.h>

int main()
{
    int r,c,i,j,a[100][100],count=0;

    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

        int unique=1;

        for(j=0;j<c;j++)
        {
            for(int k=j+1;k<c;k++)
            {
                if(a[i][j]==a[i][k])
                    unique=0;
            }
        }

        if(unique)
            count++;
    }

    printf("%d",count);

    return 0;
}
