#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num>0)
    {
        printf("%d is positive number.",num);
    }
    else if (num<0)
    {
        printf("%dis negative number.",num);
    }
    else
    {
        printf("%d is zero.",num);
    }
    
    getch();
}