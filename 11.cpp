//WAP to swap private data member of two classes. [The classes have no relation with each other].
#include <iostream>
using namespace std;

class num2;
class num1{
    int a;
    public:
    num1(int x){
        a=x;
    }
    friend void swap(num1, num2);
};

class num2{
    int b;
    public:
    num2(int y){
        b=y;
    }
    friend void swap(num1, num2);
};

void swap(num1 p, num2 q)
{
    int temp;
    temp=p.a;
    p.a=q.b;
    q.b=temp;
    cout<<"after swapping, the values are: "<<endl<<p.a<<endl<<q.b;
}

int main(){
    num1 p(10);
    num2 q(20);
    swap(p,q);
    return 0;
}