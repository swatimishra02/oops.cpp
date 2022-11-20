/*Create two classes which stores distance in feet, inches and meter, centimeter format
respectively. Write a function which compares distance in object of these classes and
displays the larger one. 
*/
#include <iostream>
using namespace std;

class length2;
class length1{
    int ft, in;
    public:
    length1(int a, int b){
        a=ft;
        b=in;
        cout<<"enter distance in feet and inches: ";
        cin>>ft>>in;
    }
    friend void compare(length1, length2);
    
};

class length2{
    int m, cm;
    public:
    length2(int c, int d){
        c=m;
        d=cm;
        cout<<"enter distance in meter and centimeters: ";
        cin>>m>>cm;
    }
    friend void compare(length1, length2);
    
};

void compare(length1 x, length2 y){
    if(x.ft>y.m)
    {
        cout<<"distance in feet is greater";
    }
    else
    {
        cout<<"distance in meters is greater";
    }
}

int main(){
    length1 x(10,20);
    length2 y(30, 40);
    compare(x,y);
    return 0;
}