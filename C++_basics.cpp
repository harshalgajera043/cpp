#include <iostream>
#include <conio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int sum(int, int); /* Global declaration of function sum ----> sentext: Return_Datatype function_name(input variables); */
/*inline int multiply(int , int);
int main() 
{
	
	int a=3, b=5;
	int s = sum(a, b);
	int m = multiply(a, b);
	cout<<"multiplication of "<<a<<" and "<<b<<" is "<<m<<endl;
	printf("sum of %d and %d is %d\n",a,b,s);
	cout<<"sum of "<<a<<" and "<<b<<" is "<<s;
}
int sum(int x, int y)
{
	cout<<"sum is "<<x+y<<endl;
	return (x+y);
}
int multiply(int x, int y)
{
	return (x*y);
}*/

/*int print(int, int, int=0);
int main()
{
	cout<<"Enter a number"<<endl;
	int x,y,z;
	cin>>x;
	cin>>y>>z;
	print(x, y);
	getch();
	
}
int print(int x, int y, int z)
{
	cout<<"Enterd number is "<<x<<" "<<z<<" and "<<y;
}
int print(int x, int y)
{
	cout<<"Entered number is"<<x<<" "<<y;
}
*/

///* 
//
//#include <iostream>
//#include <conio.h>
//using namespace std;
//
//int area(int, int);
//float area(int);
//int main()
//{
//	int r;
//	cout<<"Enter the radius of circle: "<<endl;
//	cin>>r;
//	float A = area(r);
//	cout<<"Area of the circle with radius "<<r<<" is "<<A<<endl;
//	int l, b;
//	cout<<"Enter the length and width of ractangle"<<endl;
//	cin>>l>>b;
//	int c = area(l, b);
//	cout<<"Area of ractangle with sides "<<l<<" and "<<b<<" is "<<c;
//	getch(); 
//}
//float area(int r)
//{
//	return (3.14*r*r);
//}
//int area(int l, int  b)
//{
//	return (l*b);
//}*/

#include <iostream>
#include <conio.h>
#include<stdio.h>
using namespace std;

/*structure is the group of different-different data type values*/
struct book /*struct keyword to create a structure*/
{
	private:
    	int bookid;
        char title[20];
        float price;
    
    public:
        void input()
        {
            cout<<"Enter book values in order bookid, title, price for b6"<<endl;
	        cin>>bookid>>title>>price;
	        if (bookid<0)
	    	    bookid= -bookid;
	    }
};

int main() {
//	book b1={100, "Hello world", 11.11};
//	book b2;
//	b2.bookid=200;
//	b2.price=100;
//	book b3=b1;
//	book b4;
//	cout<<"Enter the bookid, title and price"<<endl;
//	cin>>b4.bookid>>b4.title>>b4.price;
//	book b5;
//	void collection(book);
//	collection(b5);
	book input();
	book b6;
	b6.input();
}



