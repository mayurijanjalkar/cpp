#include<iostream>
using namespace std;

class one {
    int num;
public:
    void set(int x){ num=x; }
    void passbyreference(one &obj1, one &obj2){
        obj1.num=100;
        obj2.num=200;
        obj1.dis();
        obj2.dis();
    } 
    void dis(){ cout<<num; }
};

int main(){
    one obj1,obj2;
    obj1.set(10);
    obj2.set(20);
    cout<<"Before passing value"<<endl;
    obj1.dis();
    obj2.dis();
    obj1.passbyreference(obj1,obj2);
    cout<<"After passing value"<<endl;
    obj1.dis();
    obj2.dis();
    return 0;
}