//string reverse 

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char str[50] = "hey friends";
    printf("Original string : %s ",str);
    strrev(str);
    printf("\n String after reverse : %s",str);
}