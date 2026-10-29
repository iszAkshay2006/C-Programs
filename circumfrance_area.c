#include<stdio.h>
#include<conio.h>
int main(){
    float const pi = 22.0/7.0;
    float num;   
    printf("Enter radius: ");
    scanf("%f",&num);
    printf("Circumfrance of a circle is %f\n",2 * pi * num);
    printf("Area of a circle is %f",pi  * num * num);
    getch();
}