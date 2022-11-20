/*Create a class which stores account number, customer name and balance. Derive two
classes from ‘Account’ class: ‘Savings’ and ‘Current’. The ‘Savings’ class stores
minimum balance. The ‘Current’ class stores the over-due amount. Include member
functions in the appropriate class for
-deposit money
-withdraw [For saving account minimum balance should be checked.]
[For current account overdue amount should be calculated.]
-display balance */
#include <iostream>
using namespace std;

class cust
{
    public:
    char name[50];
    int acc_no;
    int bal=0;
    void deposit()
    {
        int amt;
        cout<<"enter name, account number: ";
        cin>>name>>acc_no;
        cout<<"enter amount to deposit: ";
        cin>>amt;
        bal=bal+amt;
    }
};

class savings:public cust
{
    int min=500;
    public:
    void withdraw()
    {
        int amt;
        cout<<"enter amount to withdraw: ";
        cin>>amt;
        if(amt<min)
        {
            cout<<"the minimum amount that can be withdrawn is: "<<min<<endl;
        }
        else
        {
            bal=bal-amt;
        }
        
    }
    void display(){
        cout<<"balance: "<<bal<<endl;
    }

};

class current:public cust{
    int overdue=50000;
    public:
    void withdraw(){
        int amt;
        cout<<"enter amount to withdraw: ";
        cin>>amt;
        if(amt>overdue)
        {
            cout<<"maximum amount that can be withdrawn is: "<<overdue<<endl;
        }
        else{
            bal=bal-amt;
        }
    }
    void display(){
        cout<<"balance: "<<bal<<endl;
    }
};

int main(){
    cust c;
    c.deposit();
    int choice;
    cout<<"1.savings\n2.current\nenter your choice: ";
    cin>>choice;
    if(choice==1)
    {
        savings p;
        p.withdraw();
        p.display();
    }
    if(choice==2)
    {
        current q;
        q.withdraw();
        q.display();
    }
    return 0;
}
