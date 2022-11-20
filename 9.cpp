//WAP to swap two integers using pass by reference.
#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int main(){
    int a, b;
    cout<<"enter the value of a: ";
    cin>>a;
    cout<<"enter the value of b: ";
    cin>>b;
    swap(a,b);
    cout<<"after swapping:\na="<<a<<endl<<"b="<<b;
    return 0;
}