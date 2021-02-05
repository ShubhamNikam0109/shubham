#include<stdio.h>

void reverse(char str[] , int n)
{
    int i = 0 , j = n-1;
    char c;
    while(i<j){
        c = str[i];
        str[i] = str[j];
        str[j]=c;
        i++;
        j--;
    }
}
void main()
{
    char str[] = {'a','k','s','h','a','y'};
    reverse(str,6);
    printf("%s",str);
}
