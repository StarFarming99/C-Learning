#include<iostream> //angular brackets are files in the directory paths, while "" means searchding file.
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
