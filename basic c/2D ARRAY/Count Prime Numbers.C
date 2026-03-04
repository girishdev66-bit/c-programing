#include<stdio.h>

int main()
{
    int r,c,i,j,a[100][100],count=0;

    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);

            int n=a[i][j],prime=1;

            if(n<=1)
                prime=0;
            else
            {
                for(int k=2;k*k<=n;k++)
                {
                    if(n%k==0)
                        prime=0;
                }
            }

            if(prime)
                count++;
        }
    }

    printf("%d",count);

    return 0;
}
