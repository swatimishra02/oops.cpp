#include<iostream>
using namespace std;

template<class T>
class num
{
    public:
    T x;
    T y;
    public:
    void input()
    {
        cout<<"\n Enter the value of x and y=";
        cin>>x>>y;
    }
    T maximum()
    {
        return((x>y)?x:y);
    }
};

int main()
{
    num <int> obj1;
    num <float> obj2;
    obj1.input();
    obj2.input();
    cout<<"\n The greater value is="<<obj1.maximum();
    cout<<"\n The greater value is="<<obj2.maximum();
}