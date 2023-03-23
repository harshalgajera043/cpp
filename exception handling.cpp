#include<iostream>
#include<conio.h>
using namespace std;

class abc
{
	private:
		int x, y;
	public:
		abc()
		{
			x = 5;
			y = 6;
		}
		
		showdata()
		{
			cout<<"value of x and y is "<<x<<" and "<<y<<endl;
		}
};

int main()
{
	abc a, b;
	a.showdata();
	return 0;
}




//int main()
//{
//	cout<<"Welcome!";
//	int x;
//	cin>>x;
//	try
//	{
//		if(x<3) throw 1;
//		if(x<6) throw 2;
//	}
//	catch(int e)
//	{
//		cout<<"ValueError:"<<e<<endl;
//	}
//	return 0;
//}

