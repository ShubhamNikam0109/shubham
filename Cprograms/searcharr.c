#include<stdio.h>
void main()
{
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    int n,i;
    int found = -1;
    printf("Enter the number you want to search : ");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        if(n==arr[i])
        {
            found = i;
            break;
        }
    }
    if(found!=-1)
    {
        printf("Yes number is present in array index no : %d \n",found);
    }
    else
    {
        printf("No number is not present in array \n");
    }
    
}