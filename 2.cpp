#include <iostream>
using namespace std;

class student{
    int roll, marks;
    char name[30];
    public:
    void putdetails(void);
    void getdetails(void);
};
// scope resolution to define a function outside the class
void student::getdetails(void){
    cout<<"enter name: ";
    cin>>name;
    cout<<"enter roll number: ";
    cin>>roll;
    cout<<"enter total marks: ";
    cin>>marks;
}
void student::putdetails(void){
    cout<<"Student details are: ";
    cout<<"name: "<<name<<endl<<"roll number: "<<roll<<endl<<"marks: "<<marks<<endl;
}

int main(){
    student std[50];
    int n, loop;
    cout<<"enter number of students: ";
    cin>>n;
    for(loop=0;loop<n;loop++)
    {
        cout<<"enter details of student "<<(loop+1)<<endl;
        std[loop].getdetails();
    }
    cout<<endl;
    for(loop=0;loop<n;loop++)
    {
        cout<<"student details are: "<<(loop+1)<<endl;
        std[loop].putdetails();
    }
    return 0;
    
}