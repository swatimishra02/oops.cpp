/*WAP to demonstrate the order of call of constructors and destructors for a class.*/
#include <iostream>
using namespace std;

class num{
    public:
    num(){
        cout<<"constructor was called"<<endl;
    }
    ~num(){
        cout<<"destructor was called"<<endl;
    }
    void function(){
        cout<<"function was called"<<endl;
    }
};

int main(){
    num n1,n2,n3;
    n1.function();
    n2.function();
    n3.function();
    return 0;
}