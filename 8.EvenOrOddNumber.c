#include<stdio.h>
#include<conio.h>
/*********************************************************************
Author : Steven West
Purpose : To read a number from user and check even / odd
*******************************************************************/
void main()
{
    //Variable Declaration
    int input;

    //Read values from user
    printf("Enter any Number:");
    scanf("%d",&input);

    //Logic
    if (input%2==0)
        printf("%d is Even Number",input);
    else
        printf("%d is Odd Number",input);

      getch();
}

