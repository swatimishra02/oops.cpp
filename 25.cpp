/*Create a class which stores employee name,id and salary Derive two classes from
‘Employee’ class: ‘Regular’ and ‘Part-Time’. The ‘Regular’ class stores DA, HRA and
basic salary. The ‘Part-Time’ class stores the number of hours and pay per hour.
Calculate the salary of a regular employee and a par-time employee.*/
#include <iostream>
using namespace std;

class employee{
    char name[30];
    int id, salary;
    public:
    void input(){
        cout<<"enter name of employee: ";
        cin>>name;
        cout<<"enter id: ";
        cin>>id;
        cout<<"enter salary of employee: ";
        cin>>salary;
    }
    void display(){
        cout<<"name: "<<name<<endl<<"id: "<<id<<endl<<"salary: "<<salary<<endl;
    }
};

class regular:public employee{
    int da,hra,basic;
    public:
    void input(){
        cout<<"enter basic salary: ";
        cin>>basic;
        da=(0.9*basic);
        hra=(0.1*basic);
    }
    void display(){
        cout<<"DA: "<<da<<endl<<"HRA: "<<hra<<endl;
        cout<<"salary of regular employee: "<<(da+hra+basic)<<endl;
    }
};

class parttime:public employee{
    int hr,pph;
    public:
    void input(){
        cout<<"enter pay per hour: ";
        cin>>pph;
        cout<<"enter number of hours worked: ";
        cin>>hr;
    }
    void display(){
        cout<<"salary of part-time employee is: "<<(pph*hr)<<endl;
    }

};

int main(){
    employee e;
    regular r;
    parttime p;
    e.input();
    e.display();
    r.input();
    r.display();
    p.input();
    p.display();
    return 0;
}