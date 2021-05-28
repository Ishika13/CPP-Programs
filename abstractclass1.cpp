//Program to understand the concept of abstract class using pure virtual function
//function calling using object
#include<iostream>
using namespace std;
class Animal{
public:
   //Pure Virtual Function
   virtual void sound() = 0;
   //Normal member Function
   void sleeping() {
      cout<<"Sleeping";
   }
};
class Dog: public Animal{
public:							// sound() redifined in Dog			
   void sound() {
      cout<<"Woof"<<endl;
   }
};
int main(){
   //Animal horse;
   Dog obj;	
   obj.sound();				// sound() of Dog
   obj.sleeping();
   return 0;
}
