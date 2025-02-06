#include<iostream>
using namespace std;
class one {
    public:
    int a,b;
    void set(int x, int y){
        a=x;
        b=y;
    }
    void operator+(one ob2){
        int c=a+ob2.a;
        int d=b+ob2.b;
        cout<<c<<" "<<d;
    }
};
int main(){
    one obj1,obj2;
    obj1.set(3,5);
    obj2.set(3,4);
    obj1+obj2;
}