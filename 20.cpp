/*
 Create a class which stores a string and its length as data members. Include all the
constructors. Include a member function to join two strings and display the
concatenated string.
*/
#include <iostream>
#include <string.h>
using namespace std;

class name{
    char *n;
    int len;
    public:
    name()
    {
        len=0;
        n=new char[len+1];
    }
    name(char *s){
        len=strlen(s);
        n=new char[len+1];
        strcpy(n,s);
    }
    void display(){
        cout<<n;
    }
    void compute(name a1, name a2){
        len=a1.len+a2.len;
        n=new char[len+1];
        strcpy(n,a1.n);
        strcat(n,a2.n);
    }
};

int main()
{
    char *Str1,*Str2;
    cout<<"Enter the String 1 : ";
    cin>>Str1;
    cout<<"Enter the String 2 : ";
    cin>>Str2;
    name x1(Str1,Str2);

    return 0;
}