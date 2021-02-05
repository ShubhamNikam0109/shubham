//string concatenate

#include<stdio.h>
#include<string.h>

void main()
{
    char s1[90];
    char s2[90];

    printf("Enter the first string : ");
    scanf("%s",&s1);
    printf("Enter the second string : ");
    scanf("%s",&s2);

    strcat(s1,s2);
    printf("The string is %s \n",s1);
}