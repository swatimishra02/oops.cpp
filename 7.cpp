/*WAP which displays a given character, n number of times, using a function. When the n
value is not provided, it should print the given character 80 times. When both the
character and n value is not provided, it should print ‘*’ character 80 times.
[Write the above program in two ways:-
-using function overloading.
-using default arguments.] */
#include <iostream>
using namespace std;

class name{
    public:
    char ch(char i= '*' , int n=80){
        for(i=0;i<n;i++)
        {
            cout<<i<<" ";
        }
        return 0;
    }
};

int main(){
    name cha;
    int a;
    int b;
    cout<<"enter number of times: ";
    cin>>a;
    cout<<"enter the character: ";
    cin>>b;
    cha.ch();

}
