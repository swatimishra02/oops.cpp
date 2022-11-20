/*Create a class with an integer data member. Include functions for input and output in
class. Count the number of times each function is called and display it. 
*/
#include <iostream>
using namespace std;

class integer{
    int x;
    static int count;
    public:
    integer(){
        x=++count;
    }
    ~integer(){
        x=--count;
    }
    void display(){
        cout<<"object number: "<<x<<endl;;
        cout<<"object count: "<<count<<endl;
    }
};

int integer::count;

int main(){
    integer p,q,r;
    integer::display;
    integer t;
    integer::display;
    p.display();
    q.display();
    r.display();
    return 0;
}