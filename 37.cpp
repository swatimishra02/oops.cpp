//WAP to find greatest of 3 numbers belonging to 3 different classes
#include <iostream>
using namespace std;

class num3;
class num2;
class num1
{
    int one;
    public:
    void input()
    {
        cout<<"enter first number: ";
        cin>>one;
    }
    friend void compare(num1&, num2&, num3&);
};

class num2
{
    int two;
    public:
    void input(){
        cout<<"enter second number: ";
        cin>>two;
    }
    friend void compare(num1&, num2&, num3&);
};

class num3{
    int three;
    public:
    void input(){
        cout<<"enter third number: ";
        cin>>three;
    }
    friend void compare(num1&, num2&, num3&);
};

void compare(num1 &p, num2 &q, num3 &r)
{
    if(p.one>r.three && p.one>q.two)
    {
        cout<<p.one<<" is greatest";
    }
    else if(q.two>p.one && q.two>r.three)
    {
        cout<<q.two<<" is greatest";
    }
    else
    {
        cout<<r.three<<" is greatest";
    }
}

int main()
{
    num1 r;
    num2 s;
    num3 t;
    r.input();
    s.input();
    t.input();
    compare(r,s,t);
}