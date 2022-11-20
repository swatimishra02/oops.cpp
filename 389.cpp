#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;
class Constructor
{
private:
            char *result;
public:
            Constructor(char *S1,char *S2)
            {
            strcpy(result,S1);
            strcat(result,S2);
            }
            void Display()
            {          cout<<" The Result is : "<<result;           }
};
int main()
{
char *Str1,*Str2;
cout<<" Enter the String 1 : ";
cin>>Str1;
cout<<" Enter the String 2 : ";
cin>>Str2;
Constructor C(Str1,Str2);
C.Display();
getch();
return 0;
}