#include<stdio.h>
#include<conio.h>
int main(){
    float length,breath;
    printf("Enter rectangle length\n and breath of a rectngle: ");
    scanf("%f\n %f",&length,&breath);
    printf("Perimeter of rectangle: %f\n",2*(length+breath));
    printf("Area of rectangle: %f",length*breath);
    getch();
}