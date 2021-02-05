#include<iostream.h>

class ATM
{
    private:
    int code;
    int bal;

    public:
    long cardno;

    void setdate()
    {
        code = 1212;
        bal = 25000;
        cardno = 123456;
    }

    int checkcode(int); //declaration
    void showbal();
    void withdraw(int);
};
int ATM::checkcode(int c)
{
    if(code==c)
    {
        return 1;
    }
    else
    {
        
        return 0;
    }
    
}
int ATM::showbal()
{
    cout<<"current Bal.is"<<bal;
}
void ATM::withdraw(int amt)
{
    if(bal>=amt)
    {
        bal=bal-amt;
        cout<<"Withdraw succesful current balance is "<<bal;
    }else
    {
        cout<<"Withdraw failed insufficient balance . ";
    }
    
}

void main()
{
    int usercode;
    int ch,amt;
    ATM a;
    a.setdata();

    cout<<"Enter your code :";
    cin>>usercode;

    if(a.checkcode(usercode))
    {
        cout<<"1.Balance check "<<endl;
        cout<<"2.Withdraw "<<endl;
        cout<<"Enter your choice ";
        cin>>ch;

        switch(ch)
        {
            case 1: a.showbal();
                    break;
            case 2: 
            cout<<endl<<"Enter the amount :";
            cin>>amt;
            a.withdraw(amt);
            break;
            default:
            cout<<"invalid choice.";
        }
    }
    else
    {
        cout<<"incorrect code .";
    }
    
}