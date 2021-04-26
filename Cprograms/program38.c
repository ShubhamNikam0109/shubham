


#include<stdio.h>
#include<string.h>

int xstrlen(char *s);
int main()
{
    char arr[] = "Shubham";
    int len1,len2;

    len1 = xstrlen(arr);
    len2 = xstrlen("Shubhamnikam");

    printf("\n String =  %s  and length = %d .",arr,len1);
    printf("\n String =  %s  and length = %d .","Shubhamnikam",len2);
}

int xstrlen(char *s)
{
    int len = 0;
    while(*s!='\0')
    {
        len++;
        s++;
    }
    return(len);
}