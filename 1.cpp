#include <iostream>
using namespace std;

class A{
    char name[30];
    public:
    void input(){
        cout<<"enter your name: ";
        cin>>name;
    }
    void display(){
        cout<<"Hello "<<name;
    }

};
int main(){
    A t;
    t.input();
    t.display();
    return 0;
}