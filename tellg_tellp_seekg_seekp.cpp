#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

int main()
{
	ofstream fout;  //ofstream class object ot write, update, or append the existing file
	fout.open("my_declaration.txt", ios::out);
	fout<<"Hi, i am Harshal Gajera.";
	int pos;
    pos = fout.tellp();  //tellp is used to konw the position of the pointer whie working with ostream
    cout<<pos<<"\n";  //Will going to print an interger index value.
    fout.seekp(1);  //This line of code will move pointer to the index position 1.
    fout.seekp(2, ios_base::cur);  //pointer will going to move forward by 2 index value.
    pos = fout.tellp();
    cout<<pos<<"\n";
    fout.close();
	
	
	ifstream fin;  //ifstream class object to open and read existing file
	fin.open("my_declaration.txt", ios::in);
	fin.seekg(4);  //pointer will move to the index position 4.
	char ch;
	ch = fin.get();  //get is used to read the charecter at given location.
	cout<<ch<<"\n";  //get is inbuild method of istream to ready through the file
	fin.seekg(4, ios_base::cur);  //Pointer will move forward by 4 index value.
	char h;
	h = fin.get();
	cout<<h<<"\n";
//	int pos;
	pos = fin.tellg();  //tellg is used to know the position of the pointer whilee working with fin(istream)
	cout<<pos<<"\n";
	
	
//	while (!fin.eof())
//	{
//		cout<<ch;
//		ch=fin.get();
//	}
	fin.close();
	return 0;
}



