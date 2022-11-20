//Create a class complex which stores real and imaginary part of a complex number. Input
//10 complex numbers and display them.

#include <iostream>
using namespace std;

class complex{
    int real,img;
    public:
    void input(){
        int loop;
        for(loop=0;loop<10;loop++)
        {
           cout<<"enter real part of a complex number: ";
           cin>>real;
           cout<<"enter imaginary part of a complex number: ";
           cin>>img; 
        }
    }
    void display(){
        int loop;
        for(loop=0;loop<10;loop++)
        {
            cout<<real<<"+"<<img<<"i"<<endl;
        }
    }
};
int main(){
    complex c;
    c.input();
    c.display();
    return 0;
}
