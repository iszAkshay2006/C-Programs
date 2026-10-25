#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("Enter a yaer: ");
    scanf("%d",&year);
    if (year % 400 == 0) 
    {
        printf("%d Leap year.",year);
    }
    else if (year % 4 == 0 && year % 100 != 0)
    {
        printf("%d Leap year.",year);
    }

    else
    {
        printf("%d not a leap year.",year);
    }
    getch();
}