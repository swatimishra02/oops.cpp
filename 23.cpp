/*
Create a class student which stores name, roll number and age of a student. Derive a class
test from student class, which stores marks in 5 subjects. Input and display the details of
a student.
Extend the program ii. to derive a class from result from classs ‘test’ which includes
member function to calculate total marks and percentage of a student. Input the data for a
student and display its total marks and percentage.
*/
#include <iostream>
using namespace std;

class student
{
    char name[50];
    int roll,age;
    public:
    void input()
    {
        cout<<"enter name: ";
        cin>>name;
        cout<<"enter age: ";
        cin>>age;
        cout<<"enter roll number: ";
        cin>>roll;
    }
    void display()
    {
        cout<<"name: "<<name<<endl<<"age: "<<age<<endl<<"roll number: "<<roll<<endl;
    }
};
class test: public student
{
    protected:
    int m1,m2,m3,m4,m5;
    public:
    void input()
    {
        cout<<"enter marks in subject1: ";
        cin>>m1;
        cout<<"enter marks in subject2: ";
        cin>>m2;
        cout<<"enter marks in subject3: ";
        cin>>m3;
        cout<<"enter marks in subject4: ";
        cin>>m4;
        cout<<"enter marks in subject5: ";
        cin>>m5;
    }
    void display()
    {
        cout<<"marks1: "<<m1<<endl<<"marks2: "<<m2<<endl<<"marks3: "<<m3<<endl<<"marks4: "<<m4<<endl<<"marks5: "<<m5<<endl;
    }
};
class result:public test
{
    int total,perc;
    public:
    void display()
    {
        total=m1+m2+m3+m4+m5;
        perc=(total/5);
        cout<<"total marks: "<<total<<endl<<"percentage: "<<perc<<endl;
    }
};

int main()
{
    result r;
    r.student::input();
    r.test::input();
    r.student::display();
    r.test::display();
    r.display();
    return 0;
}