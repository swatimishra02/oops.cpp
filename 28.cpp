/*WAP to overload following operators for class distance, which stores the distance in feet
and inches.
a) Binary + to
-add two objects (D3=D1+D2)
-Add an object to an integer, where the integer should be added to the
inches value ( D2=4+D1)
b) Unary - */
#include <iostream>
using namespace std;

class dimst
{
    private:
    int ft, in;
    public:
    dimst()
    {
        ft=0;
        in=0;
    }

    void input()
    {
        cout<<"enter distance is feet and inches: ";
        cin>>ft>>in;
    }
    dimst operator +(dimst &obj1)
    {
        obj1.in=in+obj1.in;
        obj1.ft=ft+obj1.ft;
        return obj1 ;
    }
    void operator - ()
    {
        in--;
    }
    void display()
    {
        cout<<"feet: "<<ft<<endl<<"inches: "<<in<<endl;
    }
};

int main()
{
    dimst p,q;

    p.input();
    p.display();
    q.input();
    q.display();
    p=p+q;
    p.display();
    -q;
    q.display();

    return 0;
}