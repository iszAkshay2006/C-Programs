#include<stdio.h>
#include<conio.h>
int main()
{
  int marks;
  printf("Enter your marks: ");
  scanf("%d",&marks);

  if(marks >= 80)
  { 
    printf("You got A grade");
  }

else if(marks >= 60)
 { 
    printf("You got B grade");

 }
else if (marks >=33)
 { 
    printf("You got C grade");
    
 }
else
 {
    printf("You failed");
 }

 getch();
}