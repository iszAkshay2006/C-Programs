#include<stdio.h>
#include<conio.h>
int main(){
    int num1,num2;
    printf("Enter two number: ");
    scanf("%d\n %d",&num1,&num2);
    printf("Sum = %d\n",num1+num2);
    printf("Sum = %d\n",num1*num2);
    if (num1<num2){
        printf("First number should be greater to perform next operttions");
    }
    else{
    printf("Sum = %d\n",num1-num2);
    printf("Sum = %d\n",num1%num2);
    printf("Sum = %d",num1/num2);
    }
    getch();
}