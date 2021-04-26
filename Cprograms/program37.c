


#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "shubham";
    char str2[] = "Nik";
    char str3[25];
    int i, k;
     
    i = strlen(str1);
    printf("\n Length of str1 is %d.",i);

    strcpy(str3,str1);
    printf("\n After copying str3 is  %s .",str3);

    k = strcmp(str1,str2);
    printf("\n After comparing k = %d .",k);

    strcat(str1,str2);
    printf("\n After concatinating sting is %s .",str1);
}