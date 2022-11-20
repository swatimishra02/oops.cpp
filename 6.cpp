//WAP to find volume of a sphere, a cylinder and a cuboid, using function overloading.
#include <iostream>
using namespace std;

int volume(int);
int volume(int, int);
int volume(int, int, int);

int main(){
    int r, rc, hc, l, b, h;
    cout<<"enter radius of sphere: ";
    cin>>r;
    cout<<"enter radius and height of cylinder: ";
    cin>>rc>>hc;
    cout<<"enter length breadth and height of cuboid: ";
    cin>>l>>b>>h;
    cout<<"volume of sphere is: "<<volume(r)<<endl;
    cout<<"volume of cylinder is: "<<volume(rc, hc)<<endl;
    cout<<"volume of cuboid is: "<<volume(l, b, h)<<endl;
}

int volume(int r)
{
    return((3.14*r*r*r)/3);
}
int volume(int rc, int hc)
{
    return(3.14*rc*rc*hc);
}
int volume(int l, int b, int h)
{
    return(l*b*h);
}
