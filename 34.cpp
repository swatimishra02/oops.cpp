#include<iostream>
using namespace std;

template<class T>
class num
{
    T arr[10];
    int i,j;
    public:
    void input()
    {
        cout<<"\n Enter the value in array=\n";
        for(i=0;i<10;i++)
        cin>>arr[i];
    }
    void sort()
    {
        for(i=0;i<9;i++)
        {
            for(j=i+1;j<10;j++)
            {
                if(arr[i]>arr[j])
                {
                    T temp;
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
    void display()
    {
        for(i=0;i<10;i++)
        cout<<"\t"<<arr[i];
        cout<<"\n";
    }
};

int main()
{
    num <int> obj1;
    num <float> obj2;
    obj1.input();
    obj2.input();
    obj1.sort();
    obj2.sort();
    cout<<"\n The sorted integer array is=\n";
    obj1.display();
    cout<<"\n The sorted float array is=\n";
    obj2.display();
}