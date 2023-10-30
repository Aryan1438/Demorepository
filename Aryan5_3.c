/*This program is prepared by 23CS057 Patel Aryan*/

# include <stdio.h>
int main()
{
    int y;// Creating a variable.

    // Managing I/O for y
    printf("Enter the year:");
    scanf("%d", &y);// Scanning the value of year.

    if(y%4==0 && y%100!=0)// Checking weather y%4 is equal to zero and y%100 not equal to zero or not.
    {
        printf("%d is a leap year.", y);
    }
    else if(y%400==0)// Checking weather y%400 is equal to zero or not.
    {
        printf("%d is a leap year.", y);
    }
    else
    {
        printf("%d is a non-leap year.", y);
    }

    printf("\n\n23CS057_Aryan\n");
    return 0;
}