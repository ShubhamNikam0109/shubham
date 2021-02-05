// string compare with characters

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char str1[80]= "multicolor";
    char str2[80]= "multinational";

    int i;

    i = strncmp(str1,str2,5);
    if(i==0)
    {
        printf("Strings are equal .");
    }
        else
        {
            printf("strings are not equal .");
        }
        
}