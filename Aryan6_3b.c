/*This program is prepared by 23CS037 Prince Kirankumar Lad*/

# include <stdio.h>

int main ()
{
    int i=1, j, no_Rows;
    printf("The number of rows you need to print the pattern: ");
    scanf("%d", &no_Rows);

    while (i<=no_Rows)
    {
        j=1;
        while(j<=no_Rows-i)
        {
            printf(" ");
            j++;
        }
        
        j=1;
        while(j<=i)
        {
            printf("%d", j);
            j++;
        }
        printf("\n");
        i++;
    }
    
    printf("\n\n23CS037_Prince\n");
    return 0;
}