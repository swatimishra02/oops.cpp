/* WAP to find sort an integer array and a float array, using function template. */

#include<iostream>
using namespace std;

template <class T>
void sort(T arr[],int S)
{
    int i,j;
    for(i=0;i<S-1;i++)
    {
        for(j=i+1;j<S;j++)
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

int main()
{
    int arr[10],i;
    float farr[10];
    cout<<"\n Enter the integers=\n";
    for(i=0;i<10;i++)
    cin>>arr[i];
    cout<<"\n Enter the floating value=\n";
    for(i=0;i<10;i++)
    cin>>farr[10];
    sort(arr,10);
    sort(farr,10);
    cout<<"\n The sorted integer array is=\n";
    for(i=0;i<10;i++)
    cout<<"\t"<<arr[i];
    cout<<"\n The sorted floating array is=\n";
    for(i=0;i<10;i++)
    cout<<"\t"<<farr[i];
}
