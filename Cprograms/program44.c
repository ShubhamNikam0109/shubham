// Check for entry


#include<stdio.h>
#include<string.h>

#define FOUND 1
#define NOTFOUND 0

int main()
{
    char masterlist[6][10] = { "shubham","sagar", "akshay","harshal"};
    int flag, a, i;
    char yourname[10];

    printf("Enter your name : ");
    scanf("%s",yourname);

    flag = NOTFOUND;
    for(i=0;i<=3;i++)
    {
        a = strcmp(&masterlist[i][0],yourname);
        if(a==0)
        {
            printf("\n Welcome you are in .");
            flag = FOUND;
        }
    }
    if(flag==NOTFOUND)
    {
        printf("\n Sorry you are unkown .");
    }
}