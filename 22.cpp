// WAP to count number of objects created from a class using concept of static data 
//members and static member function.
#include <iostream>
using namespace std;

class count{
    static int c;
    public:
    count(){
        ++c;
    }
    static void display(){
        cout<<c<<endl;
    }
};

int count::c;
int main(){
    count p,q,r;
    cout<<"number of objects are: ";
    count::display();
    return 0;
}