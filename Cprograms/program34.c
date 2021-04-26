


#include<stdio.h>

int main()
{
    char name[] = "shubh";
    char *ptr;
    ptr = name;
    while(*ptr!='\0')
    {
        printf(" %c  ",*ptr);
        ptr++;
    }
}