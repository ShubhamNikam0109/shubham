#include<iostream.h>
#include<conio.h>

long bin2dec(char binaryString[]);

int main()
{
    char bstr[20];
    long decnum;

    cout<<"Enter the string(0-1) :";
    cin>>bstr;

    decnum=bin2dec(bstr);

    if(decnum==-1)
    {
        cout<<"invalid String .";
    }
    else
    {
        cout<<"Decimal number :"<<decnum;
    }
    return 0;
    
}

long bin2dec(char binaryString[])
{
    long dnum = 0;
    int i =0;
    int n;

    while(binaryString[i]!='\0')
    {
        n = binaryString[i]-48;

        if(n!=0 && n!=1)
        return -1;
        dnum = (dnum*2)+n;
        i++;
    }
    return(dnum);
}