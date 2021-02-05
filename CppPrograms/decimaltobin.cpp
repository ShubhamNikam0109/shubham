#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int i =0, j;
    int dnum;
    int barr[20];

    cout<<"Enter decimal number : ";
    cin>>dnum;

    if(dnum==0)
    {
        cout<<"Binary string is 0.";
        getch();
        exit(0);
    }
    while(dnum>0)
    {
        barr[i]=dnum%2;
        dnum=dnum/2;
        i++;
    }
    cout<<"Binary string is ";
    for(j=i-1;j>0;j--)
    {
        cout<<barr[j];
    }
    return 0;
}