#include<stdio.h>

int main()
{
    int i , j ,count ,temp , number[25];

    printf("How many numbers you want to entered? ");
    scanf("%d",&count);

    printf("Eneter %d numbers : \n",count);

    for(i=0;i<count;i++)
        scanf("%d",&number[i]);

        for(i=0;i<count;i++)
        {
            temp = number[i];
            j = i-1;
            while((temp<number[j])&&(j>=0))
            {
                number[j+1] = number[j];
                j = j-1;
            }
            number[j+1]=temp;
        }
        printf("Order of sorted elements : ");
        for(i=0;i<count;i++)
            printf("%d\t",number[i]);

        return 0;

}
