#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap.\n");
    printf("%d %d",a,b);
    getch();
}