#include<iostream>
#include<conio.h>
using namespace std;

class alpha
{
	private:
		int x, y;
	public:
		virtual void showvalue()  //virtual keyword for letting know the constructor that they need to late bind it
		//while late binding as the compailer not get the function it looking for in parent class it will first look in the child class
		// here in our case as child class is having function with same name it will going to call.
		// virtual function getting call at a run time (memory to this block assign at the run time)
		{
		    cout<<"Value of x is "<<x<<"and y is "<<y<<endl;
		}
};

class beta:public alpha
{
	public:
		void showvalue()  //Method overriding
		{
			cout<<"Value is private"<<endl;
		}
};

int main()
{
	alpha *p, a1;
	beta b1;
	p = &b1;
	p->showvalue();  //Beta
	return 0;
}

