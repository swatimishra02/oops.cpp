//WAP to increment the value of an argument given to function
#include <iostream>
using namespace std;

class increment{
    int n;
    public:
    void input(){
        cout<<"enter a number: ";
        cin>>n;
    }
    void inc(){
        int a;
        a=++n;
        cout<<"after incrementing: "<<a;
    }
};

int main(){
    increment i;
    i.input();
    i.inc();
    return 0;
}