#include <iostream>

using namespace std;

class customer
{
    char name;
    int p;

    getname()
    {
        cout<<"Please enter your name : ";
        cin>>name;
        cout<<"Dear " << name << "Welcome.";
    }

    checkage()
    {
    	getage();
   
        if (age==0) && (age<=5)
        {
           
            if (p<=500)
            {
            	 cout<<"Available toys are : " << endl << "Alphabets, Flashcards, Building Blocks....";
			}
			else (p>500) && (p<=1000)
			{
				 cout<<"Available toys are : " << endl << "Hotwheels, Barbie....";
			}
        }
        
        if (age>5) && (age<=12)
        {
        	 if (p<=500)
            {
            cout<<"Available toys are : " <<endl << " Fashion designer, be an architect...";
			}
			else (p>500) && (p<=1000)
			{
				 cout<<"Available toys are : " <<endl << "Puzzles, Create track, Console for kids...";
			}
        }
        
        if (age>12) && (age<=16)
        {
        	if (p<=500)
            {
            	cout<<"Available toys are : "<<endl<<"Board games, crosswords....";		
			}
			else (p>500) && (p<=1000)
			{
				cout<<"Available toys are : "<<endl<<"consoles, xbox,sports....";
			}
           
        }
        
        if (age>16) && (age<=21)
        {
            if (p<=500)
            {
            cout<<"Available toys are : " <<endl<<"Sports....";	
			}
			else (p>500) && (p<=1000)
			{
				cout<<"Available toys are : " <<endl<<"Consoles, CDs, Overdrive, Battelfield,....";
			}
			
        }
        
    }
};

class toy
{
	int age;
	
	cout<<"Please enter customers age : ";
	cin>>age;
}

int main()
{

}
