//Create a class which stores name, author and price of a book. Store information for n
//number of books. Display information of all the books in a given price range using
//friend function
#include <iostream>
using namespace std;

class book
{
    public:
    char name[30];
    char author [30];
    int price;
    void get()
    {
        cout<<"enter name of book: \n";
        cin>>name;
        cout<<"enter author of book: ";
        cin>>author;
        cout<<"enter price of book: ";
        cin>>price;
    }
    friend void display(book &);
};

void display(book &b1)
{
    if (b1.price<100)
    {
        cout<<b1.name<<" "<<b1.author<<" "<<b1.price<<"\n";
    }
}

int main()
{
    int x;
    book b[30];
    cout<<"enter number of books: ";
    cin>>x;
    for(int i=0; i<x;i++)
    {
        b[i].get();        
    }
    for (int i=0;i<x;i++)
    {
        display(b[i]);
    }
}