//WAP to display data of two different types using function template with multiple arguments.

#include<iostream>


template<class T>
T max(T x,T y)
{
    return((x>y)?x:y);
}

int main()
{
    std::cout<<max(1,2)<<"\n";
    std::cout<<max(1.5,2.5)<<"\n";
}