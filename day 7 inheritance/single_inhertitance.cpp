#include<iostream>
using namespace std;
class one{
    public:
    int a;
    void set(){
        a=5;
    }
    void display(){
        cout<<a<<endl;
    }
};


class two: public one{
    public:
    int b;
    void set2()  {
        b=10;
    }
    void display2(){
        cout<<b;
    }
};
int main(){
    two obj1;
    obj1.set();
    obj1.display();
    obj1.set2();
    obj1.display2();

}