//#include<iostream>
//#include<conio.h>
//using namespace std;

//
//class Public
//{
//	public:
//    	virtual void fun()=0;  // virtual function is the function which is the run time entity which getting internpreted by the complier that this line of code(function) is late binding 
//};
//
//class Child: public Public
//{
//	public:
//		void fun()
//		{
//			cout<<"Do this ";
//		}
//};
//
//int main()
//{
//	Child c1;
//	c1.fun();
//	return 0;
//}

//template <class X, class Y> 
//Y big(X a, Y b)
//{
//	if (a>b)
//	    return a;
//	else
//	    return b;
//};
//
//int main()
//{
//	cout<<big(5,6.7)<<endl;
//	return 0;
//}

//template<class X> class big
//{
//	public:
//		void fun(X x)
//		{
//			cout<<"I am fun my value is "<<x<<endl;
//		}
//};
//
//int main()
//{
//	big <float>b1;
//	b1.fun(6.9);
//	return 0;
//}

#include<iostream>
#include<conio.h>
using namespace std;
int milk, coffee, water;

class coffee_resources
{
	private:
		
	public:
		coffee_resources()
		{
			milk = 10;
			coffee = 10;
			water = 10;
		}
		
		void show_resources()
		{
			cout<<"Coffee Machine has "<<milk<<" milk left "<<coffee<<" coffee left and "<<water<<" water left."<<endl;
		}
};

class require_resources
{
	private:
    	struct coffeeResource
	    {
		    int milk, coffee, water;
	    };
	public:
		arrayList(int m, int c, int w)
		{
			cout<<"Enter the name of the coffee";
//			char name[20];
//			cin>>name;
			coffeeResource *name;
    	    name = new coffeeResource;
    	    name->milk = m;
    	    name->coffee = c;
    	    name->water = w;
		}
		
		your_order()
		{
			cout<<"You ordered "<<name<<" .Which require "<<name->milk<<" milk, "<<name->coffee<<" coffee, and "<<name->water<<"water."<<endl;
		}	
};

int main()
{
	coffee_resources cr;
	cr.show_resources();
	require_resource rr1;
	rr1.arrayList(100,100, 30);
	return 0;
}




