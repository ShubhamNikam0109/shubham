//string length

#include<stdio.h>
#include<string.h>

void main()
{
    char s[80];
    int i ;
    printf("Enter the string : ");
    scanf("%s",&s);
    i = strlen(s);
    printf("The length of string is %d .",i);
}