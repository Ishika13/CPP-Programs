#include <iostream>

using namespace std;

class person

{
    //data members
    char name[30];
    int id;

public:
    void getdetails()
    {
        cout<<"Enter the name :";
        cin>>name;
        cout<<"Enter the ID:";
        cin>>id;
    }
    void showdetails()
    {
        cout<<"\n\nThe name is :\n";
        cout<<name<<endl;
        cout<<id;
    }

};
int main()
{
    person p1 , p2;
    p1.getdetails();
    p1.showdetails();
    cout<<"   "<<endl<<endl<<endl;
    p2.getdetails();
    p2.showdetails();
}
