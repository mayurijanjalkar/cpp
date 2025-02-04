#include<iostream>
using namespace std;
class one{
    public:
    int a;
    void set(){
        a=10;
    }
    void display(){
        cout<<a<<endl;
    }
};
class two :public one{
    public:
    int b;
    void set1(){
        b=100;
    }
    void display1(){
        cout<<b<<endl;
    }
};
class three : public one{
    public:
    int c;
    void set2(){
        c=1000;

    }
    void display2(){
    cout<<c<<endl;
}
};

int main(){

    two obj;
    obj.set();
    obj.display();
    obj.set1();
    obj.display1();
    
    three obj1;
    obj1.set();
    obj1.display();
    obj1.set2();
    obj1.display2();

}