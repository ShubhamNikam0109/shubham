#include<stdio.h>

/*int main()
{
    int i , j , n;
    printf("Enter any number.\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}*/

int main()
{
    int i = 5 , j ;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}