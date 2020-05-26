#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    prinf("Enter any character:");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':prinf("Vowel");
                 break;
        default : printf("Consonant");
                 break;
    }
            getch();

}



