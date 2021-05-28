//Program to understand the concept of abstract class using pure virtual function
//function calling using pointer to base object
#include<iostream> 
using namespace std; 
class Base 
{ 
   int x; 
public: 
    virtual void fun() = 0; 
    int getX() { return x; } 
}; 
// This class inherits from Base and implements fun() 
class Derived: public Base 
{ 
    int y; 
public: 
    void fun() { cout << "Derived function called"; } 
}; 
  
int main(void) 
{ 
    // Base b;			//Compiler error
	//Derived d; 		//derived object allowed
	Base *bp = new Derived(); 
    bp->fun(); 
    //d.fun(); 
    return 0; 
} 

//We can have pointers and reference of abstract base classess.
/* Base *bp = new Derived(); 
    bp->fun(); */
