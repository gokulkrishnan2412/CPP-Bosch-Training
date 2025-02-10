//Write a C++ program that finds the largest number in an array of integers.


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
        cout<<"Enter the array values[" << i <<"]:"<<endl;
        cin>>array[i];
        
    }
    int maxnum=array[0];
    for(int i=1; i < n;i++)
    {
        if(array[i] > maxnum)
        {
            maxnum=array[i];
        }
    }
    cout << "The largest number in an array is" << maxnum <<endl;
    return 0;
}