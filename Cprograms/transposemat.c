#include<stdio.h>
int main()
{
    int mata[3][3],matb[3][3];
    int i,j;

    printf("Enter values for the matrix : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mata[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            matb[i][j]=mata[j][i];
        }
    }

    printf("Entered matrix is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",mata[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of matrix is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d ",matb[i][j]);
        }
        printf("\n");
    }
}