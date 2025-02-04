#include<iostream>
using namespace std;
class one{
    public:
    int a;
};

class two{
    public:
    int b;
};

class three:public one , public two{
    public:
    int c;
    void set(){
        a=5;
        b=10;
        c=15;

    }

    void display(){
        cout<<a<<" "<<b<<" "<<c;

    }
};

int main(){
    three obj1;
    obj1.set();
    obj1.display();
}