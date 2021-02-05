#include<stdio.h>
void fun();
void fun(char str[], int n)
{
    int i;
   
    for(i = n-1;i >=0;i--)
    {
        printf("%c",str[i]);
    }
}

void main()
{
    int n;
    char str[6] = {'a','k','s','h','a','y'};
    fun(str,6);
}