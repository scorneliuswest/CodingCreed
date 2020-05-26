#include<stdio.h>
#include<conio.h>
//************************************************************************
//Multiplication Table


void main()
{
    int i,n=5;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }

    getch();
}
