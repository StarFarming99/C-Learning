#include<iostream>
#include "log.h"
using namespace std;
//header files

void Log(const char* message) {
	cout << message << endl;
}

int main() 
{
	//header files can declare certain type of functions and declarations.
	//dont need to copy and paste declarations everywhere.
	InitLog();
	Log("Hello world!");
}