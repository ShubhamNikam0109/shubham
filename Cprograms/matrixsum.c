#include<stdio.h>
void main()
{
    int mata[3][3],matb[3][3],matc[3][3];
    int i,j;

    printf("Enter values for 1st matrix : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mata[i][j]);
        }
    }

    printf("Enter values for 2nd Matrix : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&matb[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            matc[i][j]=mata[i][j]+matb[i][j];
        }
    }

    printf("Sum of the given matrix is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf( "%d ",matc[i][j]);
        }
        printf("\n");
    }
}