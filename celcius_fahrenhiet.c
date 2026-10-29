#include<stdio.h>
#include<conio.h>
int main(){
    float celcius;
    printf("Enter temprature in celcius: ");
    scanf("%f",&celcius);
    printf("Tempreature in fahrenhiet: %f",(celcius*9.0 / 5.0) + 32.0);
    getch();
}