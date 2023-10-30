#include <stdio.h>

int main()
{
    int a[3][3],b[3][3],c[3][3]={0},i,j,k;
    printf("enter the eliments of  metrix a:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter a[%d][%d]",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the eliments of  metrix b:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter b[%d][%d]",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                c[i][j] += a[i][j]*b[i][j];

            }
        }
    }

    printf("resulting metrix :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    printf("\n 23cs057");
    return 0;

}