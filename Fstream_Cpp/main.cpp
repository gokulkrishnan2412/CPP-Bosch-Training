#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	fstream filehandler;

	filehandler.open("test.txt");
	filehandler<< "Hi Gokul";
	filehandler.close();

}

