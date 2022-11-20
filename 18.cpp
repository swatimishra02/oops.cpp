/*
 Create a class complex which stores real and imaginary part of a complex number. 
Include all types of constructors and destructor. The destructor should display a
message about the destructor being invoked. Create objects using different
constructors and display them
*/
#include <iostream>
using namespace std;

class complex{
    int r, img;
    public:
    complex(){
        cout<<"enter an imaginary number: ";
        cin>>r>>img;
    }
    ~complex(){
        cout<<"destructor was invoked"<<endl;
    }
    void display()
{
    cout<<"the complex number is: "<<r<<"+"<<img<<"i"<<endl;
}
};
  
int main(){
    complex c1, c2;
    c1.display();
    c2.display();
    return 0;
}