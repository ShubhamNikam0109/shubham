#include<stdio.h>
void main()
{
    int a , b;
    printf("Enter number 1 :");
    scanf("%d",&a);
    printf("Enter Number 2 :");
    scanf("%d",&b);
    printf("A and B before swapping a = %d,b = %d \n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping A = %d, B = %d ",a,b );
}