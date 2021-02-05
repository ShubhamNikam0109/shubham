#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 10;
    float f =3.14;
    char c = 'A';

    int *i_ptr = &i;
    float *f_ptr = &f;
    char *c_ptr = &c;

    printf("Value of i : %d \n",*i_ptr);
    printf("value of f : %f \n",*f_ptr);
    printf("value of c : %c \n",*c_ptr);
}
