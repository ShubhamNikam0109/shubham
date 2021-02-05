#include<stdio.h>
int factorial(int ino);
int main()
{
    int ino;
    printf("Enter the number : ");
    scanf("%d",&ino);
    printf("Factorial of %d is %d ",ino,factorial(ino));
}
int factorial(int ino)
{
    if(ino<=1)
    {
        return(01);
    }
    else
    {
        ino = ino*factorial(ino-1);
        return(ino);
    }
}