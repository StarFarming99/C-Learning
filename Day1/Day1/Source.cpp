#include<iostream>
using namespace std;

int main()
{
	//variables
	//how much space does the variable occupy?
	//int
	int variable = 7; //4 bytes(-2b->2b)
	cout << variable << endl;
	unsigned int a; //doesnot have sign

	//char(1),short(1),int(4),long(4),long long
	// float, double->decimal
	float b = 5.5;
	cout << b << endl;
	//bool -> true or false; one bit of memory
	cout << sizeof(bool) << endl;
	//pointers and reference
	bool* c;
	//int& d = 9;
}