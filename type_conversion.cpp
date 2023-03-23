#include<iostream>
#include<conio.h>
using namespace std;

//class complex
//{
//	private:
//		int x, y;
//	public:
//		complex(int k)
//		{
//			x=k;
//			y=0;
//		}
//		
//		complex()  //default constructor
//		{
//			
//		}
//		
//		operator int()
//		{
//            return x;
//        }
//		
//		setData(int a, int b)
//		{
//			x= a;
//			y = b;
//		}
//		
//		showData()
//		{
//			cout<<"x="<<x<<" and y="<<y<<endl;
//		}
//};
//
//
//int main()
//{
//	complex c1, c2;
//	c1.setData(1,2);
//	c2.setData(3,4);
//	int x;
//	x=c2;
//	cout<<"value of x is "<<x<<endl;
//	c2.showData();
//	return 0;
//}

class c1
{
	private:
		int x, y;
	public:
		setData(int a, int b)
		{
			x=a; y=b;
		}
		showData()
		{
			cout<<"x="<<x<<" y="<<y<<endl;
		}
		
		int getX()
		{
			return(x);
		}
		
		int getY()
		{
			return(y);
		}
//		
//		operator c2()
//		{
//			c1 c1;
//			c2 c2;
//			c2.x = c1.y;
//			c2.y = c1.x;
//			return c2;
//		};
};

class c2
{
	private:
		int x, y;
	public:
		c2 () {
		}
		c2(c1 c)
		{
			x = c.getY();
			y = c.getX();
		}
		
		setData(int a, int b)
		{
			x=b; y=a;
		}
		showData()
		{
			cout<<"x="<<x<<" y="<<y<<endl;
		}
};


int main()
{
	c1 c1;
	c2 c2;
	c1.setData(2,3);
	c2=c1;
	c2.showData();
}


