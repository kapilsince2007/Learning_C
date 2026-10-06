#include<stdio.h>
int main(){
    int a,b;

    printf("Enter number a=");
    scanf("%d", &a);

    printf("Enter number b=");
    scanf("%d", &b);
    
    a=a+b;
    b=a-b;
    a=a-b;

    printf("The value after swapping a is %d and b is %d \n",a,b);

    return 0;
}