/*Write a C++ program to swap the variables using functions
i.  Call by value 
ii. Call by reference */

#include <iostream>
using namespace std;

//In call by value method we can sending the actual data as paramets to the function
//So whatever changes made in the function will affect the actual data
int callbyvalue(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"Inside call by value function the value of a:"<<a<<" and b:"<<b<<endl;
    return 0;
}
//In call by value method we are sending a copy of data as parameters to the function
//So whatever changes made in the function don't affect the actual data that we are passing
int callbyreference(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"Inside call by reference function the value of a:"<<a<<" and b:"<<b<<endl;
    return 0;
}

int main()
{
    int num1=10,num2=20;
    cout<<"Call By Value:"<<endl;
    cout<<"Before swapping the value of num1:"<<num1<<" and num2:"<<num2<<endl;
    callbyvalue(num1,num2);//it does not affect original values
    cout<<"After swapping the value of num1:"<<num1<<" and num2:"<<num2<<endl;
     
    cout<<"Call By Reference:"<<endl;
    cout<<"Before swapping the value of num1:"<<num1<<" and num2:"<<num2<<endl;
    callbyreference(num1,num2);// it affects original variables
    cout<<"After swapping the value of num1:"<<num1<<" and num2:"<<num2<<endl;
}
