#include<iostream.h>
void main()
{
    int i, n ,fact = 1;
    cout<<"Enter a Number: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }

    cout<<"Factorial of "<<n<<"is"<<fact<<endl;
}