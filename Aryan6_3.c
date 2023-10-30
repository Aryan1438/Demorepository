/*This program is prepared by 23CS037 Prince Kirankumar Lad*/

# include <stdio.h>

int main ()
{
    int i, j, no_Rows;
    printf("The number of rows you need to print the pattern: ");
    scanf("%d", &no_Rows);

    for (i=1;i<=no_Rows;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("%d", j%2);
        }
        printf("\n");
    }
    
    printf("\n\n23CS037_Prince\n");
    return 0;
}