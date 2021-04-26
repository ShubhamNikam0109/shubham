


#include<stdio.h>

int main()
{

    char name[] = "Shubh";
    int i;
    i = 0;
    while(name[i])
    {
        printf("\n %c  %c  %c  %c  .",name[i],*(name+i),*(i+name),i[name]);
        i++;
    }
}

/*
output : s  s  s  s
         h  h  h  h 
         u  u  u  u 
         b  b  b  b 
         h  h  h  h 
         */