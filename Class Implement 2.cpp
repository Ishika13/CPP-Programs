#include <iostream>

using namespace std;


class abc
{
    char stmt[50];

public:
    void printdeets()
    {
        cout<<"Enter statement :\n";
        cin>>stmt;
        cout<<stmt;
    }
};

int main()
{
   abc a1;
   a1.printdeets();
}
