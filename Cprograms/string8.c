//string length without using function

#include<stdio.h>
void main()
{
    int i = 0;
    char str[20];

    printf("Enter the string :");
    scanf("%s",&str);
    while(str[i]!='\0')
    {
        i++;
    }
    printf("the length of given string is %d",i);
}