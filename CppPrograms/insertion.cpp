#include<iostream.h>
#include<conio.h>

void main()
{
    int a[20],n,temp,i,j;

    cout<<"Enter the number of elements : ";
    cin>>n;
    cout<<"Enter the elements of the array .. :";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        temp = a[i];
        j = i-1;
        while(temp<a[j] && j>=0)
        {
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = temp;
    }
    cout<<"\n The sorted list is : ";
    for(i=0;i<n;i++)
    {
        cout<<a[j]<<" ";
    }
    getch();
}