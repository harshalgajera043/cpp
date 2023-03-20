#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	ofstream fout;
	fout.open("file.txt", ios::out | ios::binary);  // multiple input-output mode are seperated by |
	fout<<"\nHello. It's my World!";
	int pos;
	pos = fout.tellp();
	cout<<pos;
	fout.close();


    ifstream fin;
    fin.open("file.txt");
    char ch;
    ch=fin.get();
    
//    while (!fin.eof())
//    {
//    	cout<<ch;
//    	ch=fin.get();
//	}

//    int pos;
//    pos = fin.tellg();
//    cout<<pos;
    fin.close();
	return 0;
}
