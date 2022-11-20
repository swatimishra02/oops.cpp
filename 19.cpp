/*
Create a class which stores time in hh:mm format. Include all the constructors. The
parameterized constructor should initialize the minute value to zero, if it is not
provided.
*/
#include <iostream>
using namespace std;

class clock{
    int t, hr, min;
    public:
    clock(){
        cout<<"enter time: ";
        cin>>t;
    }
    clock(int min){
        min=0;
    }
    clock(clock &a){
        t=a.t;
        hr=a.hr;
        min=a.min;
    }
    void display(){
        hr=t/60;
        min=t%60;
        cout<<"the time in hh:mm is: "<<hr<<":"<<min<<endl;
    }
};

int main(){
    clock c;
    c.display();
    return 0;
}