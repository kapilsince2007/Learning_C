#include<stdio.h>
int main(){
    float l,b,area,peri;
    printf("Enter the length of rectangle:");
    scanf("%f",&l);

    printf("Enter the breadth of rectangle:");
    scanf("%f",&b);

    area=l*b;
    peri=2*(l+b);

    printf("The area is %.2f \nThe perimeter is %.2f \n", area,peri);


   return 0;
}