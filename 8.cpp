//WAP to find square and cube of a number using inline function.

#include <iostream>
using namespace std;

class number{
    int n;
    public:
    void input(){
        cout<<"enter an integer: ";
        cin>>n;
    }
    void square(void);
    void cube(void);
};

int main(){
    number a;
    a.input();
    a.square();
    a.cube();
    return 0;
}
inline void number::square()
{
    int sq=n*n;
    cout<<"the square is: "<<sq<<endl;
}
inline void number::cube()
{
    int c=n*n*n;
    cout<<"the cube is: "<<c<<endl;
}