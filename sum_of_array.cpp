// Write a C++ program that computes the sum of all elements

#include <iostream>
#include <string.h>

using namespace std;
int sum(int x[], int size)
{
    int sum=0;
    for(int i=0; i < size;i++)
    {
        sum=sum+x[i];
    }
    cout<<"The total sum of the array is:"<<sum;
    return 0;
}
int main()
{   
    //Initializing variables
    int n;
    //int sum=0;
    cout << "Enter the number of arrays:";
    cin >> n;
    int array[n];
    //Getting values from the user
    for(int i=0; i < n; i++)
    {
        cout<<"Enter the array values[" << i <<"]:";
        cin>>array[i];
    
    }
    sum(array,n);
    /*for(int i=0; i < n;i++)
    {
        sum=sum+array[i];
    }
    cout<<"The total sum of the array is:"<<sum;*/
    return 0;
    
}