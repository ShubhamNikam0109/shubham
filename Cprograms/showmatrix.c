#include<stdio.h>
void main()
{
    int a[3][3];
    int i, j;
    printf("\n Enter the value of first matrix : ");
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                {
                    printf("Matrix [%d][%d]  : ",i,j);
                    scanf("%d",&a[i][j]);
                }
        }
    printf("\n Matrix is \n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",a[i][j]);
        }
    printf("\n");
    }    
}