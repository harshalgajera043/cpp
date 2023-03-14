#include<iostream>
#include<conio.h>
using namespace std;
//
//class complex
//{
//	private:
//		int x, y;
//	public:
//		setValue(int a, int b)
//		{
//			x = a;
//			y = b;
//		}
//		
//		showValue()
//		{
//			cout<<"Value of x is "<<x<<" and y is "<<y<<endl;
//		}
//		
//		friend istream& operator>>(istream&, complex&);
//		friend ostream& operator<<(ostream&, complex);
//};
//
//istream& operator>>(istream& din, complex &c)
//{
//	din>>c.x;
//	din>>c.y;
//	return (din);
//};
//
//ostream& operator<<(ostream& dout, complex c)
//{
//	dout<<"X is"<<c.x<<"Y= "<<c.y<<endl;
//	return(dout);
//}
//
//int main()
//{
//	complex c1;
//	cout<<"Enter a complex number ";
//	cin>>c1;
//	cout<<c1;
//	return 0;
//}

//#include<iostream>
////#inlcude<conio.h>
//using namespace std;
//
//class a
//{
//	private:
//		int x, y;
//	public:
//		setvalue(int a, int b)
//		{
//			x=a; b=y;
//		}
//		
////		friend b::showvalue();
//		
//};
//
//class b 
//{
//	private:
//		int g,h;
//	public:
//		friend a::setvalue(int, int);
//};
//
//int main()
//{
//	b b1;
//	setvalue(3,4);
//	return 0;
//}

class A  // This is the Perent/Base class for class B
{
	protected:
		int x;
};

class B: protected A  // class B is the child/Derived_class for class A
{
	public:
		setValue(int a)
		{
			x = a;
		}
		showValue()
		{
			cout<<"Value of x is "<<x<<endl;
		}
};

class c:public B
{
	public:
		tellMe()
		{
			cout<<"Value of x is "<<x<<endl;
		}
};

int main()
{
	B b1;
	c c1;
	c1.tellMe();
	b1.setValue(9);
	b1.showValue();
	return 0;
}


