#include<stdio.h>

char * fun(char str[] , int n)
{
    char ptr[200];
    int  i = n-1;
    int j = 0;
    for(i = n-1;j = 0; i >= 0; i--; j++)
    ptr[j] = str[i] ;
    printf("c",ptr[j]);
}

void main()
{
    char str[] = {'a','k','s','h'};
    char * ptr = fun(str,4);

}