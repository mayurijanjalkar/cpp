#include<iostream>
using namespace std;
class sub{
    int a,b,c;
    public:
    void collect();
    void calculate();
    void display();
};
void sub::collect(){
cout<<"Enter a & b";
cin>>a>>b;
}
void sub:: calculate(){
    c=a-b;
}
void sub :: display(){
    cout<<c;
}
int main(){
    sub obj;
    obj.collect();
    obj.calculate();
    obj.display();
}