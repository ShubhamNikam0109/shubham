


#include<stdio.h>
int swap(char **s1,char **s2);
int main()
{
    char *name[] = {"shubham","akshay","sagar","harshal"};
    swap(&name[1],&name[2]);
    printf("new %s and %s .",name[1],name[2]);

}
int swap(char **s1,char **s2)
{
    char *t;
    t = *s1;
    *s1 = *s2;
    *s2 = t;
}
/*
int main()
{
    char *name[] = {"shubham","akshay","sagar","harshal"};
    char *temp;

    printf("\n Original name[1] = %s and name[2] = %s .",name[1],name[2]);

    temp = name[1];
    name[1] = name[2];
    name[2] = temp;

    printf("\n New  name[1] = %s  and name[2] = %s  .",name[1],name[2]);
}  */