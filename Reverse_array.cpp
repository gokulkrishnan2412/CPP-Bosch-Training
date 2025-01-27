//Write a C++ program to reverse an array of integers


#include <iostream>
#include <string.h>

using namespace std;
int main()
{   
    //Initializing variables
    int n;
    cout << "Enter the number of arrays:";
    cin >> n;
    int array[n];
    //Getting values from the user
    for(int i=0; i < n; i++)
    {
        cout<<"Enter the array values[" << i <<"]:";
        cin>>array[i];
    
    }
    cout<<"The array is:"<<endl;
    for(int i=0; i < n;i++)
    {
        cout<<array[i]<<'\t';
    }
    cout<<"\nThe reversed array is:"<<endl;
    for(int j=(n-1); j>=0; j--)
    {
        cout<<array[j]<<'\t';
    }
    
    return 0;
}