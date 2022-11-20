/*WAP to add two objects of distance class. Overload the operator ‘>’ to compare two
objects and return the object with larger time value and display it. Overload the ‘==’
operator to compare and display whether two given objects contain same distance
value.*/
#include <iostream>
using namespace std;

class dist
{
    int d;
    public:
    void input()
    {
        cout<<"enter distance:";
        cin>>d;
    }
    
    int operator >(dist &x)
    {
        if(d>x.d)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int operator ==(dist &y)
    {
        if(d==y.d)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

};

int main(){
    dist m,n;
    int p;
    m.input();
    n.input();
    if (m==n)
    {
        cout<<"distances are equal";
    }
    else if(m>n)
    {
        cout<<"The first no is greater than the second";
    }
    return 0;
}

