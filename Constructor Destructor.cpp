#include <iostream>

using namespace std;

static int count;   //Initializing the variable globally.

class code
{
public:
    int no;
    char branch;
    code (int i , char b);

public:
code(code &A)       //Using & operator.
{
    no=A.no;
    branch=A.branch;
}

~code()
{
    cout<<"Destroying Object"<<--count<<"\n";
}
};

code::code(int i,char b) //using global scope operator.
{
    no=i;
    branch=b;
}


int main()
{
code X();
code Y(10,'a');  //The constructor is parameterized, thus passing values in it.
return 0;
}
