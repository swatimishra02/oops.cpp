// WAP to find area of a circle, a rectangle and a triangle, using concept of function
//overloading.

#include <iostream>
using namespace std;

//function overloading: multiple functions having the same name but have different parameters.
int area(int);
int area(int, int);
float area(float, float);

int main(){
    int r, l, b, base, h;
    cout<<"enter radius of a circle: ";
    cin>>r;
    cout<<"enter lenght and breadth of rectangle: ";
    cin>>l>>b;
    cout<<"enter base and height of triangle: ";
    cin>>base>>h;
    cout<<"the area of circle is: "<<area(r)<<endl;
    cout<<"the area of rectangle is: "<<area(l,b)<<endl;
    cout<<"the area of triangle is: "<<area(base,h)<<endl;
}
int area(int r)
{
    return(3.14*r*r);
}
int area(int l, int b)
{
    return(l*b);
}
float area(float base, float h)
{
    return(0.5*base*h);
}