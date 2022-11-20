#include<iostream>


using namespace std;

class A
{
public:
char ch ='c';
int i  = 1;

void function1();
void function2();
};


void A :: function1()
{
if(ch == 'c')
	throw(ch);
}

void A :: function2()
{
if(i == 1)
	throw(i);
}



int main()
{
   A ob;
   try
   {	
	ob.function1();	
   }
   catch(...)     
   {
	cout<<"A catch block for all types of exceptions has caught an exception \n";
   }
   try
   {	
    ob.function2();		
   }
   catch(...)     
   {
	cout<<"A catch block for all types of exceptions has caught an exception \n";
   }
}