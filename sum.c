/*Program to sum any two numbers
Author: Kapil Pokharel
Date: 2026/09/28
*/
#include<stdio.h>
int main(){
    int Num1, Num2;
    int sum;

    printf("Enter the first number:");
    scanf("%d",&Num1);

    printf("Enter the Second number:");
    scanf("%d",&Num2);
   
    sum=Num1+Num2;
    printf("The sum of %d and %d is %d. \n", Num1,Num2,sum);
    
    return 0;
}
