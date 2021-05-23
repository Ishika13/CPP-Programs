//Implementing Multiple Inheritance
#include <iostream> 
using namespace std; 
  class One {
      protected:
      int a;
      public:
      void setinfoOne(int x){
          a = x;
      }
       };
class Two 	{
    protected:
    int b;
    public:
    void setinfoTwo(int y){
         
        b = y;
    }
     
};
class Multiple : public One, public Two{
	//class Derived_class_name access base_class_1, access base_class_n
     
    public : 
        void Display(){
        cout << "Value of a = " <<a<< endl;   //accessing member variables of class One
        cout << "Value of b = " <<b<< endl;    //accessing member variables of class Two
        cout << "Value of c = " <<a+b<<endl;
    }
};
int main() 
{    
    Multiple ml;
    ml.setinfoOne(10);  //accessing member function of class One
    ml.setinfoTwo(20);  //accessing member function of class Two
    ml.Display();
    
    return 0; 
}

