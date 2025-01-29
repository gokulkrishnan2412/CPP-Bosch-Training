/*Write a program to demonstrate the use of a pointer to a pointer.

Tasks:

1.Declare an integer variable, a pointer to it, and a pointer to the pointer.
2.Assign values and print the results using different levels of pointers*/

#include<stdio.h>

int main()
{
	int var=10;
	int *ptr= &var;
	int **ptr1=&ptr;

	//Printing a ptr
	
	printf("\nValue of var=%d", var);

	//Printing the address of ptr
	
	printf("\nValue of ptr=%d", *ptr);

    **ptr1=20;

	//Printing the address of ptr1
	
	printf("\nvalue of ptr1=%d", **ptr1);

	//Printing the addresses
	
	printf("\nAddress of var=%p", &var);
	printf("\nAddress of ptr=%p", &ptr);
	printf("\nAddress of ptr1=%p", &ptr1);



	return 0;

}