
#include<stdio.h>

int main()
{
    int i,j,n;
    printf("Enter n\n");
    scanf("%d",&n);
    int a[n][n],b[n][n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
}
