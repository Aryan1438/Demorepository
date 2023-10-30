#include<stdio.h>
int main()
{
    int a[10],b[10],n1,n2,i,c[20]={0},temp;
    printf("enter size of first array :");
    scanf("%d",&n1);
    printf("enter values :");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter size of second array :");
    scanf("%d",&n2);
    printf("enter values :");
     
     for(i=0;i<n2;i++)
     {
        scanf("%d",&b[i]);
     }
     for(i=0;i<n1+n2;i++)
     {
        if(i<n1)
        {
            c[i]=a[i];
        }
        else
        {
            c[i]=b[i-n1];
        }

     }
     for(i=0;i<n1+n2-1;i++)
     {
        for(int j=0;j<n1+n2-1-i;j++)
        {
            if (c[j]>c[j+1])
            {
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }

        }

        printf("shorted array :\n");
        for(i=0;i<n1+n2;i++)
        {
            printf("%d\n",c[i]);

        }
     }
}