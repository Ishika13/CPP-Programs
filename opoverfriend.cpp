//program to demonstrate overloading of binary operator using friend function

using namespace std;
#include <iostream>
class Rupees
{
private:
	int rs;
public:
	Rupees(int r) { rs = r; }
  	// add Rupees + Rupees using a friend function
	friend Rupees operator+(const Rupees &r1, const Rupees &r2); // prototype
 
	int getRupees() const { return rs; }
};
// note: this function is not a member function!

//return_type function_name(list of arguments)
Rupees operator+(const Rupees &r1, const Rupees &r2)
{
	// use the Rupees constructor and operator+(int, int) 
	// we can access rs directly because this is a friend function
	return Rupees(r1.rs + r2.rs);
}
 
int main()
{
	Rupees rs1(6);
	Rupees rs2(8);
	Rupees RupeesSum = rs1 + rs2;
	cout<< "I have "<< RupeesSum.getRupees() << " Rupees." <<endl;
 	return 0;
}
