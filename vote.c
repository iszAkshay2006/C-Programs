#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d",&age);
    if (age>=18)
    {
        printf("They can vote.");
    }
    else
    {
        printf("They cant't vote.");
    }
getch();
    
}