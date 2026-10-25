#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("%d even number.",num);
    }
    else
    {
        printf("%d number is odd.",num);
    }
    getch();
}