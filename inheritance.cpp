#include<iostream>
#include<conio.h>
using namespace std;

class car
{
	private:
		int length, width, area;
		
	public:
		setDimensions(int l, int w)
		{
			length = l;
			width = w;
		}
		
		getUservalue()
		{
			cout<<"Enter the value of length and width "<<endl;
			cin>>length>>width;
		}
		getArea()
		{
			area = length * width;
			cout<<"Area of rectangle is "<<area<<endl;
		}
};

class audi: public car  //audi is the child/derived class of car (parent class/base class)
{
	private:
		char color[10];
		
	public:
		GetCarColor()
		{
			cout<<"Enter the require color "<<endl;
			cin>>color;
		}
		KnowColor()
		{
			cout<<"Color of your car is "<<color;
		}
};

int main()
{
//	car c1;
//	c1.setDimensions(10,12);
//    c1.getUservalue();
//	c1.getArea();

    audi A1;
    A1.getUservalue();
	A1.getArea();
	A1.GetCarColor();
	A1.KnowColor();
	return 0;
}


