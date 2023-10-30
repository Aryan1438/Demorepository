#include<stdio.h>
#include<conio.h>
int main()
{
    //This program is made by 23CS057 Patel Aryan
    int n1,n2=143,n3=0,n4=1,n5=-1;
    printf("Enter your roll no :");
    scanf("%d",&n1);
    printf("Sr. No.\tDecimal\t\t\tOctal\t\tHexa-Decimal\n\n");
    printf("1.\tYour roll number\t%o\t\t%x\n",n1,n1);
    printf("2.\t143 \t\t\t%o\t\t%x\n",n2,n2);
    printf("3.\t0 \t\t\t%o\t\t%x\n",n3,n3);
    printf("4.\t1 \t\t\t%o\t\t%x\n",n4,n4);
    printf("5.\t-1 \t\t\t%o\t%x\n",n5,n5);
    printf("\n23CS057_Aryan");
    return 0;
}