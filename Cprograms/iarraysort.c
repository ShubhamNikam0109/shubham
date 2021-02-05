#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[5];
    int i,j,t,n=5;
     printf("Enter elements of an array : ");
     for(i=0;i<5;i++)
     {
         scanf("%d",&arr[i]);
     }
     printf("Unsorted order of array : \n");
     for(i=0;i<5;i++)
     {
         printf("%d\t",arr[i]);
     }

     for(i=0;i<n;i++)
     {
         for(j=i+1;j<n;j++)
         {
             if(arr[i]>arr[j])      // For increasing order   // if (arr[i]<arr[j]) for decreasing order
             {
                 t = arr[i];
                 arr[i] = arr[j];
                 arr[j] = t;
             }
         }
     }

     printf("\n Sorted order of array in increasing order is : \n");
     for(i=0;i<5;i++)
     {
         printf("%d\t",arr[i]);
     }
}