#include<stdio.h>

int main()
{
    int r,c,i,j,a[100][100],count=0;

    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

        int pal=1;

        for(j=0;j<c/2;j++)
        {
            if(a[i][j]!=a[i][c-1-j])
                pal=0;
        }

        if(pal)
            count++;
    }

    printf("%d",count);

    return 0;
}
