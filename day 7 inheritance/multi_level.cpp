#include<iostream>
using namespace std;
class one{
    public:
    int a;
};

class two:public one{
    public:
    int b;
};

class three:public two{
    public:
    int c;
    void set(){
        a=5;
        b=15;
        c=25;
    }
    void display(){
        cout<<a<<" "<<b<<" "<<c;

    }
};

int main(){
    three obj;
    obj.set();
    obj.display();
}