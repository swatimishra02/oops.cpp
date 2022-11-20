#include <iostream>
using namespace std;
//Create a class which stores id, name, age and basic salary of an employee. Input data for
// n number of employees. Calculate the gross salary of all the employees and display it
//along with all other details in a tabular form.
//[Gross salary= Basic salary + DA + HRA,
//DA = 80% of Basic salary
//HRA=10% of Basic salary ]

class employee{
    int id, age, basic, da, hra, gross;
    char name[50];
    public:
    void getdetails(void);
    void putdetails(void);
};

void employee::getdetails(void){
    cout<<"enter name: ";
    cin>>name;
    cout<<"enter age: ";
    cin>>age;
    cout<<"enter id: ";
    cin>>id;
    cout<<"enter basic salary: ";
    cin>>basic;
    da=0.8*basic;
    hra=0.1*basic;
    gross=da+hra;
}

void employee::putdetails(void){
    cout<<"the employee details are: ";
    cout<<name<<"\t"<<id<<"\t"<<age<<"\t"<<gross<<endl;
}
int main(){
    employee emp[50];
    int n, loop;
    cout<<"enter number of employees: ";
    cin>>n;
    for(loop=0;loop<n;loop++)
    {
        cout<<"enter employee details of employee "<<(loop+1)<<endl;
        emp[loop].getdetails();
    }
    for(loop=0;loop<n;loop++)
    {
        cout<<"the details of employee "<<(loop+1)<<endl;
        emp[loop].putdetails();
    }
    return 0;
}