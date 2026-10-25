#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2;
    int temp = 0;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1 ,&num2);
    
        temp = num1;
        num1 = num2;
        num2 = temp;
        
    printf("%d is first number, %d is second number and they are swiped.",num1 ,num2);
    getch();

}