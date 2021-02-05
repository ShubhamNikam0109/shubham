//string to lower charcters and upper case characters

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char s[20] = "Shubham Nikam";

    printf("Original string is %s\n",s);
    //strlwr(s);
    strupr(s);
    printf("String after lower case %s\n",s);
}