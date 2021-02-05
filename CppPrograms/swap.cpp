#include<iostream.h>
#include<conio.h>

void main()
{
    int a ,b;
    cout<<"Enter value for A :";
    cin>>a;
    cout<<"Enter value for B :";
    cin>>b;
    cout<<"\n Values before swap is A:"<<a<<"B"<<b;

    a = a+b;
    b = a-b;
    b = a-b;
    cout<<"\n Values after swap is A :"<<a<<"B :"<<b;
}