//Structure
/*A structure in C++ (often referred to as a struct) is a user-defined data type that allows you to group 
together different types of data under a single unit. Structures are typically used to represent a record 
or a collection of related data. Unlike arrays that hold elements of the same type, structures can 
store data of different types*/



#include <iostream>
#include <string.h>
using namespace std;

//Structure definition
struct data1
{
    string name;
    int age;
    string ID;
    string mailID;

};
int main()
{
    //Creating object to access the structure
    data1 d[1];

    //Assigning values
    d[0].name="Gokul";
    d[0].age=25;
    d[0].ID="G41";
    d[0].mailID="gkrish@gmail.com";

    //Printing the values.
    //1st method
    cout<<"Name="<<d[0].name<<endl;
    //Using pointers
    cout<< "Name=" << (*d).name<<endl;
    //Pointers with the address
    //Using pointers
    cout<< "Name=" << (*&d[0]).name<<endl;
    //using ->
    /*why can't we use the exact aray element like d[0] in the line  cout<<"Name="<<(d)->name<<endl;*/
    /*The expression (d)->name uses pointer syntax rather than array indexing syntax. This is because d is an 
    array of structures, and in C++ 
    when you use an array variable (like d), the array name itself is treated as a pointer to its first element.*/

    cout<<"Name="<<(d)->name<<endl;

    
    
}
