/*Create a class which stores name, roll number and total marks for a student. Input data for
n students. Find the average marks scored by n students, store it as a data member of
the class and display it using a function which may be called without object.
*/
#include <iostream>
using namespace std;

class student{
    char name[50];
    int roll, marks, n, avg;
    int sum=0;
    public:
    void input(){
        int i;
        cout<<"enter number of students: ";
        cin>>n;
        for(i=0;i<n;i++)
        {
            cout<<"enter name: ";
            cin>>name;
            cout<<"enter roll number: ";
            cin>>roll;
            cout<<"enter marks: ";
            cin>>marks;
        }
    }
    void getaverage(){
        sum=marks*n;
        avg=sum/n;
        cout<<"average of class is: "<<avg;
    }
};

int main(){
    student s;
    return 0;
}

