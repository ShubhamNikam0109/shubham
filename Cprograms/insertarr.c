// Insert an element in the array

#include<stdio.h>
int main()
{
    int arr[50],i,n;
    int position ,value;

    printf("\n Enter number of elements in array : ");
    scanf("%d",&n);

    printf("Enter %d elements \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Content of array : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n Enter the position where you want to insert new elemwnt : ");
    scanf("%d",&position);
    printf("Enter the value : ");
    scanf("%d",&value);

    for(i=n-1;i>=position-1;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[position -1]=value;

    printf("\n Array after insertion of new array .\n");

    for(i=0;i<=n;i++)
    {
        printf("%d\t",arr[i]);
    }
}