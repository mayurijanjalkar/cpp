#include<iostream>
using namespace std;
class one{
 public:
 int a,b;
 one (int x, int y){
    a=x;
    b=y;
 }
 one (one &obj1){
 a=obj1.a;
 b=obj1.b;
 }
 void display(){
    cout<<a<<" "<<b<<endl;
 }
};
int main(){
    one obj1(4,5);
    one obj2(obj1);
    obj2.display();
}