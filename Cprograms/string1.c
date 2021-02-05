//string copy

#include<stdio.h>
#include<string.h>

void main()
{
    char input[10]="hello";
    char output[10];

    printf("Input : %s\n",input);
    strcpy(output,input);
    printf("output : %s\n",output);

    strcpy(output,"student");
    printf("Output %s \n",output);
}