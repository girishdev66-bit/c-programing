#include<stdio.h>

int main()
{
    int n,i,a[100];
    int *p,max;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    p=a;
    max=*p;

    for(i=1;i<n;i++)
    {
        p++;
        if(*p>max)
            max=*p;
    }

    printf("%d",max);

    return 0;
}
