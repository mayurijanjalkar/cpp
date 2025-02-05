#include<iostream>
using namespace std;

class triangle;
class circle{
    int r;
    int pi;
    public:
    void set(){
        
        pi=3.14;
    cout<<"Enter the radious";
    cin>>r;
    };
    friend void fun(circle, triangle);
};
class triangle{
    public:
    int a;
    int b;
    int c;
    void set1(){
        cout<<"Enter the angle of triangle";
        cin>>a>>b>>c;
    if (a+b+c==180){
        cout<<"valid"<<endl;
    }
    else {
        cout<<"invalid"<<endl;
    }
    };
    friend void fun(circle,triangle);
    
};

void fun( circle o1,  triangle o2){
    cout<<"Circle:"<<o1.r*o1.r+o1.pi<<endl;
    cout<<"triangle"<<o2.a+o2.b+o2.c<<endl;
}

int main(){
    circle obj1;
    triangle obj2;
    obj1.set();
    obj2.set1();

fun(obj1,obj2);
}
