// C++ program to explain Single inheritance 
#include <iostream> 
using namespace std; 
// base class 
class Vehicle { 
  private:
  	int a;
  public:
    Vehicle() 
    { 
      cout << "This is a Vehicle" << endl; 
    } 
   	void print()
    {
    cout<<"I am member of base"<<endl;
	}
}; 
// sub class derived from base classes 
class Car: public Vehicle{ 
	public:
	void print()
    {
    cout<<"I am  member of derived"<<endl;
	}
 }; 

int main() 
{    
    // creating object of sub class will invoke the constructor of base classes 
    Car obj;  //the constructor of base is called.
    obj.print(); // the method of derived is called.
    return 0; 
} 
