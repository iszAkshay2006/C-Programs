#include<stdint.h>
#include<conio.h>
int main(){
    int num;
    printf("Enter number do you want to know: ");
    scanf("%d",&num);
    int years = num/365;
    int remaning = num%365;
    int month = remaning/30;
    int days = remaning%30;
    printf("Years: %d\n",years);
    printf("Month: %d\n",month);
    printf("Days: %d",days);
    getch();
}