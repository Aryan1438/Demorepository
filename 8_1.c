#include <stdio.h>

int str_len(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}
int main()
{
    int i, j, Option;
    char str1[50], str2[50];

retry:

    printf("\n###################### Menu ######################");
    printf("\n[1] Length of the string.");
    printf("\n[2] Reverse the string.");
    printf("\n[3] Compare two strings.");
    printf("\n[4] Copy one string to another.");
    printf("\n[5] Concatenate two strings.");
    printf("\n[6] Exit.");
    printf("\nChoose the option:");
    scanf("%d", &Option);
    switch (Option)
    {
    case 1:
        printf("Enter the string:");
        scanf("\n");
        scanf("%[^\n]", str1);
        printf("length of string :%d", str_len(str1));
        goto retry;
    case 2:
        printf("enter string :");
        scanf("\n");
        scanf("%[^\n]", str1);
        i = 0;
        j = str_len(str1);
        j--;
        while (i < j)
        {
            int swap = str1[i];
            str1[i] = str1[j];
            str1[j] = swap;
            i++;
            j--;
        }
        printf("The reversed string is:%s", str1);

        goto retry;

    case 3:
        printf("enter first string :");
        scanf("\n");
        scanf("%[^\n]", str1);
        printf("enter second string :");
        scanf("\n");
        scanf("%[^\n]", str2);

        i = 0;
        j = 0;
        while (str1[i] == str2[i])
        {
            if (str1[i] = '\0')
                
            {
                j = 1;
                break;
            }
            i++;
        }
        if (j == 1)
        {
            printf("string are same");
        }
        else
        {
            printf("string are not same");
        }
        goto retry;
    case 4:
        printf("Enter the string:");
        scanf("\n");
        scanf("%[^\n]", str1);
        i = 0;
        while (str1[i] != '\0')
        {
            str2[i] = str1[i];
            i++;
        }
        printf("The copied string is:%s", str2);

        goto retry;

    case 5:
        printf("Enter the first string:");
        scanf("\n");
        scanf("%[^\n]", str1);
        printf("Enter the second string:");
        scanf("\n");
        scanf("%[^\n]", str2);

        i = str_len(str1);
        j = 0;
        while (str2[j] != '\0')
        {
            str1[i] = str2[j];
            i++;
            j++;
        }
        printf("%s", str1);
        goto retry;

    case 6:
        printf("exiting programing.\n\n23CS057 Patel Aryan");
        break;
    default:
        printf("enter valid case sr..");
    }
}