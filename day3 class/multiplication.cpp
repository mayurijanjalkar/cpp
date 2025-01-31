#include<iostream>
using namespace std;
class mul{
    int a,b,c;
    public:
    void collect();
    void calculate();
    void display();
};
void mul::collect(){
cout<<"Enter a & b";
cin>>a>>b;
}
void mul:: calculate(){
    c=a*b;
}
void mul :: display(){
    cout<<c;
}
int main(){
    mul obj;
    obj.collect();
    obj.calculate();
    obj.display();
}