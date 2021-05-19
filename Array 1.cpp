#include <iostream>

using namespace std;

class car
{

 public:
    int model;
    getmodel()
    {
        cout<<"Enter model number : ";
        cin>>model;
    }
    printmodel()
    {
        cout<<"The model is : "<<model <<endl;
    }
};

int main()
{
  car c[3];
  int i;
  for(i=0;i<3;i++)
  {
       c[i].getmodel();
       c[i].printmodel();
  }
}
