//Pointers in C++

#include<iostream>

using namespace std;

int main()
{
	int var=10;
	int *ptr= &var;
	int **ptr1=&ptr;

	//Printing a ptr
	
	cout<<"Value of var="<< var<<endl;

	//Printing the address of ptr
	
	cout<<"\nValue of ptr="<< *ptr<<endl;

    **ptr1=20;

	//Printing the address of ptr1
	
	cout<<"\nvalue of ptr1="<< **ptr1<<endl;

	//Printing the addresses
	
	cout<<"Address of var="<< &var<<endl;
	cout<<"Address of ptr="<< &ptr<<endl;
	cout<<"Address of ptr1="<< &ptr1<<endl;



	return 0;

}