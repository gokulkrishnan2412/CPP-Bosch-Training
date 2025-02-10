#include<iostream>
#include<process.h> 

using namespace std;
class IndiaBix
{
    static int x; 
    public:
    IndiaBix()
    {
        if(x == 1)
            exit(0); 
        else
            x++;
    }
    void Display()
    {
        cout << x << " ";
    }
};
int IndiaBix::x = 0; 
int main()
{
    IndiaBix objBix1; 
    objBix1.Display(); 
    IndiaBix objBix2; 
    objBix2.Display(); 
    return 0; 
}