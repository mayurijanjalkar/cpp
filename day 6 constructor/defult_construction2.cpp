#include<iostream>
using namespace std;
class one{
    public:
    int a,b;
    one (){
        a=4;
        b=5;

    }
    void display(){
        cout<<a<<" "<<b<<endl;

    }
};
int main(){
    one obj1,obj2;
    obj1.display();
    obj2.display();
}