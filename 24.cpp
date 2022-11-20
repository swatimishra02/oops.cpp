/*Create a class ‘shape’. Derive three classes from it: Circle, Triangle and Rectangle.
Include the relevant data members and functions in all the classes. Find the area of each
shape and display it.*/
#include <iostream>
using namespace std;

class shape{

};

class circle:public shape{
    int r;
    public:
    void area(){
        cout<<"enter radius of a circle: ";
        cin>>r; 
    }
    void display(){
        cout<<"area of cirlce is: "<<(3.14*r*r)<<endl;
    }
};

class triangle:public shape{
    int b,h;
    public:
    void area(){
        cout<<"enter base and height of a triangle: ";
        cin>>b>>h; 
    }
    void display(){
        cout<<"area of triangle is: "<<(0.5*b*h)<<endl;
    }
};

class rectangle:public shape{
    int l,w;
    public:
    void area(){
        cout<<"enter lenght and width of rectangle: ";
        cin>>l>>w; 
    }
    void display(){
        cout<<"area of rectangle is: "<<(l*w)<<endl;
    }
};

int main(){
    circle p;
    triangle q;
    rectangle r;
    p.area();
    p.display();
    q.area();
    q.display();
    r.area();
    r.display();
    return 0;
}