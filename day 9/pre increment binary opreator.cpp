#include <iostream>
using namespace std;

class one{
    public:
    int a,b;
    void set(int x,int y)
    {
        a=x;
        b=y;
  
    }

    void operator --()           //oprator func
    {
        a=--a;
        b=--b;

    }
    void display()
    {
        cout<<a<<" "<<b;
    }
};

int main()
{
    one obj1;
    obj1.set(3,4);
    --obj1;                      //call -ve object for minus          
    obj1.display();
}