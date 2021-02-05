#include<iostream.h>
#include<string.h>

void main()
{
    char a[100], b[100];
    cout<<"Enter the string to check if it is a palindrome\n";
    cin>>a;

    strcpy(b,a);
    strrev(b);
    if(strcmp(a,b)==0)
        cout<<"Entered string is palindrome\n";
        else
        cout<<"Enytered string is not palindrome.\n";
        
        

}