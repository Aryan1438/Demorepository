#include<stdio.h>
#include<string.h>

int main()
{
    char name[5][50],temp[50];
    printf("Enter the names :");
    for(int i=0;i<5;i++)
    {
        scanf("%s",name[i]);
    }

    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }
     printf("your sorted names are:\n");
    for(int i=0;i<5;i++)
    {
       
        printf("%s\n",name[i]);
    }

}