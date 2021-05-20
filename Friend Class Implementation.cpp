#include <iostream>

using namespace std;

class pp
{
public:
    float price;
    float quantity;

public:
    int p;
    int q;
    int rate = 90;
    int x;
int calculate()
{

    cout<<"Enter price(1) or quantity(2) : " << endl;
    cin>>x;

    getprice()
        {
            cout << "Enter price : ";
            p = q * rate;
        }

        setprice()
        {
            cout << "The quantity is : " << q <<endl;
        }

         getquantity()
        {
            cout << "Enter quantity : ";
            p = q * rate;
        }

        setquantity()
        {
            cout << "The price is : " << p <<endl;
        }

    if (x==1)
    {
        getprice();
        setprice();
    }
    else
    {
        getquantity();
        setquantity();
    }
}
};

int main()
{
 pp a;
 a.calculate();
}
